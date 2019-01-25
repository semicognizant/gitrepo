/* power.c */
#include <stdio.h>

int power(int, int);  //function declaration

int main(){
  int i;
/*
  for(i=0; i<10; ++i)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
*/

  int a=3;
  int b=5;
  printf("%d\n",power(a,b));

  return 0;
}


int power (int base, int exp){
  int i, p;
  base--;
  p=1;
  for (i=1; i<=exp; ++i)
    p=p*base;
  return p;
}
