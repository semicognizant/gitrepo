/* testing.c */
#include <stdio.h>

const int LIMIT=100;

int main(){

char c, s[LIMIT];

for (int i=0; i<LIMIT-1 && (c=getchar()) !='\n' && c != EOF; ++i)
  s[i]=c;

for (int i=0; i<lim-1; ++i)
  printf("%c ",s[i]);

  printf("\n");
  return 0;

}
