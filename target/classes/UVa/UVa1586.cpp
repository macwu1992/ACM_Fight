#include <stdio.h>
#include <string.h>
#define MAX 81

int main(){
	int n;
	int i, j;
	int num;
	float sum;
	float element;
	char str[MAX];
	scanf("%d", &n);
	while(n--){
		scanf("%s", &str);
		sum = 0;
		num = 0;
		for(i = 0; i<strlen(str);){

			switch(str[i]){
			case 'C':
				element = 12.01;
				num = 1;
				break;
			case 'H':
				element = 1.008;
				num = 1;
				break;
			case 'O':
				element = 16.00;
				num = 1;
				break;
			case 'N':
				element = 14.01;
				num = 1;
				break;
			default:
				break;
			}

			if(str[i+1]>'0' && str[i+1]<='9'){
				j = i+1;
				num = 0;

				while(str[j]>'0' && str[j]<='9'){
					num = num*10 + str[j] - 48;
					j++;
				}
				i = j-1;
			}

			sum += element*num;
			i++;
			//下一字母
		}
		printf("%.3f\n", sum);
	}

	return 0;
}