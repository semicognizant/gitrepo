/* translator_0.1.c */

#include <stdio.h>
//#include <fcntl.h>

#define MAXLINE 250      /* maximum input line size */

void mygetline(char line[], int maxline);
int mystringcmp(char *s, char *t);
//char * mygetfileline(FILE *fp_in);

int main()
{
  struct entry {
    char *English;
    char *Spanish;
    char *French;
  };

  struct entry dictionary[10];

  FILE *fp;
  //fp= open("phrases.txt","r");

  //fp= close();

  dictionary[0].English="good morning";
  dictionary[0].Spanish="buenos dias";
  dictionary[0].French="bonjour";



  int len;
  char input[MAXLINE];

  printf("Enter a phrase to be translated: ");
  mygetline(input,MAXLINE);
  //printf("The line you entered is: ");
  //printf("%s\n",input);
  if (!mystringcmp(input,dictionary[0].English)){
    printf("Espanol: %s\n",dictionary[0].Spanish);
    printf("Francais: %s\n",dictionary[0].French);
  }
  else
    printf("I do not know that phrase!\n");


}

/* mygetline: read a line into s, return length */
void mygetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !='\n'; ++i){
        //printf("getting=%c at %d\n",c,i);
        s[i] = c;
      }
    ++i;
    s[i] = c;
}


/* mystringcmp: compare strings */
int mystringcmp(char *s, char *t){
  for (; *s==*t; s++,t++);
    //printf("%c=?=%c\n",*s,*t);
  if (*s=='\n'){
      //printf("returning zero\n");
      return 0;
    }
  //printf("returning %d\n", *s-*t);
  return *s-*t;
}

/* getline: retrieve a line from the file
char * mygetfileline(FILE *fp_in){

} */
