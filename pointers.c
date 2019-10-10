/* pointers.c  */

#include <stdio.h>


void nothgin(){}

int plus(int a, int b){
  return a+b;
}

int times(int a,int b){
  return a*b;
}

int main(){
  char phrase[100];
  *phrase='a';

  printf("%c\n",phrase[0]);

 printf("%d\n",times(5,2));

 printf("Hello, world!");

}
