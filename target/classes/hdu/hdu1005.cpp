#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, n;
  int arr[48];
  arr[1] = 1;
  arr[2] = 1;

  while(scanf("%d%d%d", &a, &b, &n) == 3){
    if(!a && !b && !n)
      break;
    for(int i = 3; i < 48; i++){
      arr[i] = (arr[i-1]*a + arr[i-2]*b)%7;
     }
    printf("%d\n", arr[n%48]);
  }
}
