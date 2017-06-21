/*开灯问题
*有编号为1～n的n盏灯，一开始所有的灯都是灭的，
*第1个人按下所有的开关，
*第2个人按下编号为2的倍数的开关，
*第3个人按下编号为3的倍数的开关，
*以此类推
*
*一共有k个人，n盏灯，问最后那些灯开着？
*
*输入： 7 3
*输出： 1 5 6 7
*/
#include <stdio.h>
#include <string.h>
#define N 105

int main(){
  int bulb[N];
  int i, j, w, n, k;

  while(scanf("%d%d", &n, &k)){
    memset(bulb, 0, sizeof(bulb));
    for(i = 1; i<=k; i++){
      for(j = 1; j<=n; j++){
        if (j%i == 0) bulb[j] = !bulb[j];
      }
    }

    for(w = 1; w<=n; w++){
      if(bulb[w]) printf("%d ", w);
    }

    printf("\n");
  }

  return 0;
}
