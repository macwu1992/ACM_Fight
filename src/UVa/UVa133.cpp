#include <stdio.h>
#define N 22
/*
UVa133
有n个人，n<20，围成一圈，
alice从1逆时针数，数k个停下，bob从n顺时针数，数m个停下
输入 n, k, m 输出每次踢出的人的号码

思路：
停止条件：n==0
筛选条件：alice与bob选的是同一个人，n－1，不是同一个人，n－2
前提条件：判断k，m是否小于n，不小于n，k -= n;m -= n

alice 停下坐标为indi_a + k - 1，bob停下坐标为indi_b - m

数组中，1表示此人还在，0表示此人被踢出

当遇到0时就跳过

伪代码：
N = 21
person[N]

while n > 0:
	a = alice moveNext
	b = bob moveNext
	
	if a == b:
		n = n-1
	else
		n = n-1
*/

int main()
{
	int person[N] = {0};
	int n, k, m;
	int indi_a, indi_b, tag, temp_a, temp_b;
	int i, j;

	person[0] = -1;

	while(scanf("%d%d%d", &n, &k, &m) && n && k && m)
	{
		i = j =0;
		indi_a = 0;
		indi_b = n+1;

		for (i = 1; i <= n; i++)
		{
			person[i] = i;
		}

		while(n)
		{
			indi_a += 4;
			indi_b -= 3;

			while(indi_a > n) indi_a -= n;
			while(indi_b <= 0) indi_b += n;

			if (person[indi_a] == person[indi_b])
			{
				printf("  %d", person[indi_a]);
				if (n > 0) printf(",");
			}else if (person[indi_a] != person[indi_b])
			{
				printf("  %d  %d", person[indi_a], person[indi_b]);
				if (n > 0) printf(",");
			}

			person[indi_a] = 0;
			person[indi_b] = 0;

			indi_a --;
			indi_b ++;

			temp_a = person[indi_a];
			temp_b = person[indi_b];

			for (i = 1; i <= n; i++)
			{
				if(person[i] == 0)
				{
					for (j = i; j <= n; j++)
					{
						person[j] = person[j+1];
					}
					i = 0;
					n--;
				}
			}

			for (i = 1; i <= n; i++)
			{
				if (person[i] == temp_a)
				{
					indi_a = i;
				}

				if (person[i] == temp_b)
				{
					indi_b = i;
				}
			}
		}
		printf("\n");
	}
	return 0;
}