/* atoi.c: convert s to integer */
#include <stdio.h>

int atoi(char s[]);



int main(){
  char c,line[50];
  int value;

  for(int i=0; i<50 && (c=getchar()) >= '0' && c <= '9'; ++i)
    line[i]=c;

  value=atoi(line);

  printf("answer=%d\n",value);

}


int atoi(char s[]){
  int i, n;

  n=0;
  for(i=0; s[i]>='0' && s[i]<='9';++i)
    n=10*n+(s[i]-'0');

    return n;
}
