#include <stdio.h>
#include <string.h>

char arr[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

int main(){
  char c;
  int i;
  while((c = getchar()) != EOF){
      for(i = 0 ; c != arr[i] && arr[i]; i++);
      if(arr[i]) printf("%c", arr[i-1]);
      else printf("%c", c);
  }
  return 0;
}
