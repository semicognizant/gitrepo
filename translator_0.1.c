/* translator_0.1.c */

#include <stdio.h>
#include <fcntl.h>

#define MAXLINE 250      /* maximum input line size */

int mygetline(char line[], int maxline);
int mystringcmp( char *s, char *t);


/* print longest input line */
int main()
{
  struct entry {
    char *English;
    char *Spanish;
    char *French;
  };

  struct entry dictionary[10];
  dictionary[0].English="good morning";
  dictionary[0].Spanish="buenos dias";
  dictionary[0].French="bonjour";



  int len;
  char input[MAXLINE];

  printf("Enter a phrase to be translated: ");
  len=mygetline(input,MAXLINE);
  printf("The line you entered is: ");
  printf("%s",input);
  if (mystringcmp(input,"good morning"))
    printf("The lines are the same.\n");
  else
    printf("The lines are different.\n");

}

/* mygetline: read a line into s, return length */
int mygetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* mystringcmp: compare strings */
int mystringcmp(char *s, char *t){
  for (; *s==*t; s++,t++)
    if (*s=='\0')
      return 0;
  return *s-*t;
}
