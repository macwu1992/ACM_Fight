#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
	char c_str[MAX];
	int O_count = 0;
	int sum = 0;
	int n = 0;
	int i;
	scanf("%d", &n);
	while( n && (scanf("%s", &c_str) == 1)){
		sum = 0;
		O_count = 0;
	for(i = 0; i<strlen(c_str); i++){
			if(c_str[i] == 'O') O_count++;
			if(c_str[i] == 'X') O_count = 0;
			sum += O_count;				
		}
		printf("%d\n", sum);
		n--;
	}
	return 0;
}