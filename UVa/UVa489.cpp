#include <stdio.h>
#include <string.h>

/*UVa489 新思路：
建立字母表，
遍历str_given，存在的字符设为1，不存在的设为0；
遍历str_guess， 猜对的设为0；没猜对的wrongtime++
很重要的一点，不管所猜的字符串有多长，已经猜过的字符不再重复猜
*/

bool ifAllZero(int s[])
{
	int i;
	for(i = 0; i < 26; i++)
	{
		if(s[i] != 0)	return 0;
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	char str_given[100];
	char str_guess[100];

	int i, j, rnd, wrong_time, win, lose;
	i = j = 0;

	while(scanf("%d", &rnd) && rnd != -1)
	{
		int alpha[26] = {0};
	    int guess_alpha[26] = {0};
		win = lose = 0;
		scanf("%s%s",str_given, str_guess);
		wrong_time = 7;
		
		for (i = 0; i < strlen(str_given); i++)
		{
			alpha[str_given[i] - 97] = 1;
		}

		for (i = 0; i < strlen(str_guess); i++)
		{
			guess_alpha[str_guess[i] - 97] = 1;
		}

// printf("%d\n", wrong_time);
// for (i = 0; i < 25; i++)
// {
// 	printf("%d ", alpha[i]);
// }
// printf("\n");
// for (i = 0; i < 25; i++)
// {
// 	printf("%d ", guess_alpha[i]);
// }

		for (j = 0; j < strlen(str_guess) && wrong_time && guess_alpha[str_guess[j]-97]; j++)
		{

			if(guess_alpha[str_guess[j]-97] == 2)
			{
				continue;
			}else if (alpha[str_guess[j]-97] == 1)
			{
				alpha[str_guess[j]-97] = 0;
				if(ifAllZero(alpha)) break;
			}
			else
			{
				wrong_time--;
			}
			guess_alpha[str_guess[j]-97] = 2;
		}

// printf("%d\n", wrong_time);
// for (i = 0; i < 25; i++)
// {
// 	printf("%d ", alpha[i]);
// }
// printf("\n");
// for (i = 0; i < 25; i++)
// {
// 	printf("%d ", guess_alpha[i]);
// }

		if(wrong_time && ifAllZero(alpha))
		{
			printf("Round %d\n", rnd);
			printf("You win.\n");
		}else if (wrong_time <= 0)
		{
			printf("Round %d\n", rnd);
			printf("You lose.\n");
		}else {printf("Round %d\n", rnd); printf("You chickened out.\n");}

	}
	return 0;
}