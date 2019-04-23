/* translator_0.2.c */

#include <stdio.h>
//#include <fcntl.h>

#define MAXLINE 250      /* maximum input line size */
#define DMAX 2
#define FALSE 0
#define TRUE 1

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

  dictionary[1].English="see you later";
  dictionary[1].Spanish="nos vemos las tardes";
  dictionary[1].French="a plus tard";



  int len;
  char input[MAXLINE];

  printf("Enter a phrase to be translated: ");
  mygetline(input,MAXLINE);
  //printf("The line you entered is: ");
  //printf("%s\n",input);
  int done = FALSE;
  for (int i = 0; i<DMAX; i++){
    //printf("i=%d\n",i);
    if (!mystringcmp(input,dictionary[i].English)){
      printf("Espanol: %s\n",dictionary[i].Spanish);
      printf("Francais: %s\n",dictionary[i].French);
      done = TRUE;
    }
  }
  if (!done)
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
  for (; *s==*t; s++,t++){
    //printf("%c=?=%c\n",*s,*t);
    ;
  }
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
