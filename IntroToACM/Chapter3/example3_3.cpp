/*蛇形填数
*10 11 12 1
*9  16 13 2
*8  15 14 3
*7  6  5  4
*
*
*
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
  int matrix[MAX][MAX];
  int n;
  int cum;
  int i, j;

  memset(matrix, 0 ,sizeof(matrix));
  scanf("%d", &n);
  if(n<2) n = 2;

  matrix[i = 0][j = n-1] = cum = 1;
   while(cum < n*n){
    while(i+1<n && !matrix[i+1][j])  {matrix[++i][j] = ++cum;}
    while(j>=1 && !matrix[i][j-1])  {matrix[i][--j] = ++cum;}
    while(i>=1 && !matrix[i-1][j])  {matrix[--i][j] = ++cum;}
    while(j+1<n && !matrix[i][j+1])  {matrix[i][++j] = ++cum;}
  }

  for(i = 0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
