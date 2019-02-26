/* increment.c */
#include <stdio.h>

void my_strcat(char s[], char t[]);

int main (){

  char string1[20] = "abcdefg";
  char string2[] = "hijklmn";

  printf("string1=%s\n",string1);
  printf("string2=%s\n",string2);

  my_strcat(string1,string2);

  printf("string1=%s\n",string1);


  return 0;
}

void my_strcat(char s[],char t[]){
  int i,j;
  i=j=0;
  while (s[i] != '\0')
    i++;
  while ((s[i++] = t[j++]) != '\0')
    ;
}
