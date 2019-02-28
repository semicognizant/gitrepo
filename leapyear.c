/* leapyear.c checks for leap year from input text */
#include <stdio.h>

int atoi(char s[]);
int getyear(void);

int main(){
  int year;

  year=getyear();

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    printf("%d is a leap year\n",year);
  else
    printf("%d is not a leap year\n",year);

}

//function atoi(): converts character string to number
int atoi(char s[]){
  int i, n;

  n=0;
  for(i=0; s[i]>='0' && s[i]<='9';++i)
    n=10*n+(s[i]-'0');

    return n;
}

//function getyear(): get year value from keyboard
int getyear(void){
  char c, line[50];

  for(int i=0; i<50 && (c=getchar()) >= '0' && c <= '9'; ++i)
    line[i]=c; //load number string from keyboard and put in line[]

  return atoi(line);
}
