/* functions.c */

#include <stdio.h>

//int i;
int power(int, int);

/* main program */

int main(){
  //int i;
  printf("main: &i= %0x i=%d\n",&i,i);
  for (i=0;i<10;i+=2){
    printf("%d %d %d\n",i,power(2,i),power(-3,i));
    printf("main for: &i= %0x i=%d\n",&i,i);
  }

  return 0;
  }


int power(int base ,int n){
  int p;
  printf("power: &in= %0x in=%d\n",&i,i);
  p=1;

  for(i=1;i<=n;++i)
    p=p*base;

  return p;
}
