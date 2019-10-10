/* convert2.c */

#include <stdio.h>

int main(){
  long nc;
  char a;

  nc = 0;

  while((a=getchar()) != EOF){
    printf("%ld , %d \n",++nc,a);

  }

}
