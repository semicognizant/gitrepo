/* translator_1.0.c */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 250      /* maximum input line size */
#define DMAX 2
#define FALSE 0
#define TRUE 1

void mygetline(char line[], int maxline);
int mystringcmp(char *s, char *t);
void mystringcopy(char *s, char *t);



int main()

/* defining structure and other variables */
{
  struct entry {
    char *English;
    char *Spanish;
    char *French;
    char *Greek;
    char *Russian;
  };

  struct entry dictionary[25];
  int entry_num;
  char *string_in = malloc(sizeof(100));


/* opening file and loading data */
  FILE *fp;
  fp = fopen("phrases.txt","r");
  if(fp == NULL){
    printf("Error opening file!\n");
    exit(1);
  }
  else
    printf("File found...loading...");

  fscanf(fp,"%d",&entry_num);
  fgets(string_in,MAXLINE,fp);
  fgets(string_in,MAXLINE,fp);

  for(int j=0;j<entry_num;j++){
    fgets(string_in,MAXLINE,fp);
    dictionary[j].English = malloc(100);
    mystringcopy(dictionary[j].English,string_in);

    fgets(string_in,MAXLINE,fp);
    dictionary[j].Spanish = malloc(100);
    mystringcopy(dictionary[j].Spanish,string_in);

    fgets(string_in,MAXLINE,fp);
    dictionary[j].French = malloc(100);
    mystringcopy(dictionary[j].French,string_in);

    fgets(string_in,MAXLINE,fp);
    dictionary[j].Greek = malloc(100);
    mystringcopy(dictionary[j].Greek,string_in);

    fgets(string_in,MAXLINE,fp);
    dictionary[j].Russian = malloc(100);
    mystringcopy(dictionary[j].Russian,string_in);

    fgets(string_in,MAXLINE,fp);
  }

  fclose(fp);
  printf("done.\n");


/* main program loop */
  int len;
  char input[MAXLINE];

  while (TRUE){
    printf("Enter a phrase to be translated: ");
    mygetline(input,MAXLINE);
    int done = FALSE;
    for (int i = 0; i<entry_num; i++){
      if (mystringcmp(input,dictionary[i].English)){
        printf("English: %s",dictionary[i].English);
        printf("Espanol: %s",dictionary[i].Spanish);
        printf("Francais: %s",dictionary[i].French);
        printf("Ellinika: %s",dictionary[i].Greek);
        printf("Russkiy: %s",dictionary[i].Russian);
        done = TRUE;
      }
    }
    if (!done)
      printf("I do not know that phrase!\n");
  }
}


/* mygetline: read a line into s, return length */
void mygetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !='\n'; ++i){
        s[i] = c;
      }
    s[i] = '\n';
}




/* mystringcmp: compare strings */
int mystringcmp(char *s, char *t){
  //printf("Entering mystringcmp...\n");
  //printf("Comparing %s to %s\n",s,t);
  int done=FALSE,same=FALSE;
  for (; *s==*t; s++, t++){
    //printf("%d=?=%d and %c=?=%c\n",*s,*t,*s,*t);
        if (*s=='\n'){
          //printf("mystringcmp returning true\n");
          return TRUE;
        }
    }
  //printf("mystringcmp returning false\n");
  return FALSE;
}




/* mystringcopy */
void mystringcopy (char *s, char *t){
  while((*s++ = *t++) != '#')
    ;
  --s;
  *s='\n';
}
