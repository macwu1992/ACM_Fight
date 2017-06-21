#include <stdio.h>

int main(){
  int c ,p, q;
  c = p = q = 1;

  while( (c = getchar()) != EOF){
    if(c == '"') {printf("%s", q? "``": "''" ); q = !q;}
    else  printf("%c", c);
  }
  return 0;
}
