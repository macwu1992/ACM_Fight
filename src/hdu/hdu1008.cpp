#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 0; 

  while(scanf("%d", &n) != EOF && n){
    int now = 0;
    int time = 0;
    int toFloor = 0;

    for (int i = 0; i < n; i++)
    {
      /* code */
      scanf("%d", &toFloor);
      {
        int gap = toFloor - now;

        if (gap > 0) time += (6 * gap);
        if (gap < 0) time -= (4 * gap);
        now = toFloor;
      }
    }
    time += n * 5;
    printf("%d\n", time);
  }  
}
