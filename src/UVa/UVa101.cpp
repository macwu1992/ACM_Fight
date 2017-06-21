/*
思路：
move a onto b clear a & b and move a to b's top
move a over b clear a and move a to b's top
pile a onto b clear b and move a & a'stack to b's top
pile a over b move a'stack to b'stack's top

quit
*/
#include <vector>
#include <iostream>
#include <string>

#define MAXN 30

using namespace std;

vector<int> pile[MAXN];

int n;

void findBlock(int x, int &p, int &h)
{
	for (p = 0; p < n; p++)
	{
		for (h = 0; h < pile[p].size(); h++)
		{
			if (pile[p][h] == x) return;
		}
	}
}

void clear(int p, int h)
{
	for (int i = h+1; i < pile[p].size(); i++)
	{
		int b = pile[p][i];
		pile[b].push_back(b);
	}
	pile[p].resize(h+1);
}

void pileto(int p1, int h1, int p2)
{
	for (int i = h1; i < pile[p1].size(); i++)
	{
		pile[p2].push_back(pile[p1][i]);
	}
	pile[p1].resize(h1);
}

void print()
{
	for (int i = 0; i < n; i++)
	{
		cout << i << ':';
		for (int j = 0; j < pile[i].size(); j++)
		{
			cout << " " << pile[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int a, b;
	string s1, s2;
	cin >> n;
	for (int i = 0; i < n; i++) pile[i].push_back(i);

	while(cin >> s1 >> a >> s2 >> b)
	{
		int pa, pb, ha, hb;
		findBlock(a, pa, ha);
		findBlock(b, pb, hb);

		if(pa == pb) continue;
		if(s1 == "move") clear(pa, ha);
		if(s2 == "onto") clear(pb, hb);

		pileto(pa, ha, pb);
	}
	print();
	return 0;
}