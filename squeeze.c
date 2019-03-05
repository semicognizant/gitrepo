/* squeeze.c */
#include<stdio.h>

void squeeze(char s[], char c);
//void replace(char s[], char c, char d);

int main(){

  char string[] = "I love cats!";
  printf("%s\n",string);
  squeeze(string,'c');
  printf("%s\n",string);


  return 0;
}


void squeeze(char s[], char c){
  int i,j;

  for (i=j=0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
    s[j]='\0';
}

/*
void replace(char s[], char c, char d){
  int i,j;

  for (i=j=0; s[i]) != '\0'; i++)
    if (s[i] != c)
      s[j++]
}
*/
