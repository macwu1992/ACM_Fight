#include <stdio.h>
#include <string.h>
#define LEN 1000

int main(){
	int n, num, nu;
	int i, j;
	i = j =0;
	char str[LEN];
	scanf("%d", &n);
	while(n--){
		int count[10] = {0};

		scanf("%d", &num);
		for(i = num; i > 0; i--){
			nu = sprintf(str, "%d", i);
			for (j = 0; j < strlen(str); j++){
				count[str[j] - 48]++;
			}
		}

		for(j = 0; j<9; ++j){
			printf("%d ", count[j]);
		}
		printf("%d\n", count[9]);
	}

	return 0;
}