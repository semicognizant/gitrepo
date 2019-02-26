/* leapyear.c checks for leap year from input text */
#include <stdio.h>

int atoi(char s[]);



int main(){
  char c,line[50];
  int year;

  for(int i=0; i<50 && (c=getchar()) >= '0' && c <= '9'; ++i)
    line[i]=c; //load number string from keyboard and put in line[]

  year=atoi(line); //converts the string in line[] to a number

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    printf("%d is a leap year\n",year);
  else
    printf("%d is not a leap year\n",year);


}

//converts character string to number
int atoi(char s[]){
  int i, n;

  n=0;
  for(i=0; s[i]>='0' && s[i]<='9';++i)
    n=10*n+(s[i]-'0');

    return n;
}
