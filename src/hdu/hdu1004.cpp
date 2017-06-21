#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	int n;
	string str[1001]; int a[1001];
	while (cin >> n&&n != 0){
		getchar();
		for (int i = 0; i < n; i++){
			getline(cin, str[i]); a[i] = 1;
		}
		for (int i = 0; i < n; i++){
			for (int j = i+1; j < n; j++){
				if (str[i] == str[j]){ a[i]++; }
			}
		}
		int max=a[0];
		for (int i = 1; i < n; i++){
			if (a[i]>max){ max = a[i]; }
		}
		for (int i = 0; i < n; i++){
			if (a[i] == max){ cout << str[i] << endl;break; }
		}
	}

  return 0;
}
