#include<stdio.h>
int main(){
  int a = 0;
  while(scanf("%d", &a) != EOF){
    if(a%2 == 0) {
      printf("%d\n\n", a/2*(1+a));
    }
    else {
      printf("%d\n\n", (1+a)/2*a);
    }
  }
}
