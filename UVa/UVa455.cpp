#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k, n, len, temp, period, index, tag;
	char str[81];
	scanf("%d", &n);
	printf("\n");
	while(n--)
	{
		tag = i = j = index = 0;
		period = 1;
		scanf("%s", &str);
		len = strlen(str);
		for(i = 1; i <= len; i++)
		{
			if (len%i != 0)	continue;
			k = i - 1;
			index = len/i;

			while(k)
			{
				for(j = 0; j < index && j+k*index < len; j++)
				{
// printf("j:%d\n", j);
// printf("index:%d\n", index);
// printf("str[j]:%c ", str[j]);
// printf("str[j+k*index]:%c\n", str[j+k*index]);
					if(str[j] != str[j+k*index])
					{
						//period = 1;
						tag = 0;
						k = 1;
// printf("tag:%d\n", tag);
// printf("period:%d\n", period);
						break;
					}
					if(str[j] == str[j+k*index]) 
					{
						tag = 1;
// printf("tag:%d\n", tag);
// printf("period:%d\n", period);
					}
				}
				k--;
			}
			if (tag == 1) period = i;
		}

		if (period == len || period == 1) printf("%d", len/period);
		else printf("%d", period);
		if (n) printf("\n");
	}
	
	return 0;
}