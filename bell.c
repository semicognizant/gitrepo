/* bell.c  */

#include <stdio.h>

int main(){
 char phrase[] = "Hello, world!";
 phrase[6]='\0';
 printf("%s\n",phrase);

 return 0;
}
