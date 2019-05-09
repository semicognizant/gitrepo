/* translator_0.2.c */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 250      /* maximum input line size */
#define DMAX 2
#define FALSE 0
#define TRUE 1

void mygetline(char line[], int maxline);
int mystringcmp(char *s, char *t);
void mystringcopy(char *s, char *t);
void myput(char *s);


int main()
{
  struct entry {
    char *English;
    char *Spanish;
    char *French;
  };

  struct entry dictionary[10];
  int entry_num;
  char *string_in = malloc(sizeof(100));


  FILE *fp;
  fp = fopen("phrases.txt","r");
  if(fp == NULL){
    printf("Error opening file!\n");
    exit(1);
  }
  else
    printf("File found...loading...");

  fscanf(fp,"%d",&entry_num);
  //printf("entry_num=%d\n",entry_num);
  fgets(string_in,MAXLINE,fp);
  fgets(string_in,MAXLINE,fp);

  for(int j=0;j<entry_num;j++){
    //printf("j=%d\n",j);
    fgets(string_in,MAXLINE,fp);
    //printf("string_in=%s\n",string_in);
    dictionary[j].English = malloc(100);
    mystringcopy(dictionary[j].English,string_in);
    //myput(dictionary[j].English);


    fgets(string_in,MAXLINE,fp);
    dictionary[j].Spanish = malloc(100);
    mystringcopy(dictionary[j].Spanish,string_in);
    //printf("Spanish: %s\n",dictionary[j].Spanish);

    fgets(string_in,MAXLINE,fp);
    dictionary[j].French = malloc(100);
    mystringcopy(dictionary[j].French,string_in);
    //printf("French: %s\n",dictionary[j].French);

    fgets(string_in,MAXLINE,fp);
  }

  fclose(fp);
  printf("done.\n");

  int len;
  char input[MAXLINE];

/*
  for(int k=0;k<entry_num;k++){
    printf("Entry %d\n",k);
    printf("English=%s",dictionary[k].English);
    printf("Spanish=%s",dictionary[k].Spanish);
    printf("French=%s",dictionary[k].French);
  }
*/


  printf("Enter a phrase to be translated: ");
  mygetline(input,MAXLINE);
  //printf("The line you entered is: \n");
  //myput(input);
  int done = FALSE;
  for (int i = 0; i<entry_num; i++){
    //printf("i=%d\n",i);
    if (mystringcmp(input,dictionary[i].English)){
      //printf("\n");
      printf("English: %s",dictionary[i].English);
      printf("Espanol: %s",dictionary[i].Spanish);
      printf("Francais: %s",dictionary[i].French);
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
    //++i;
    s[i] = '\n';
}


/* myput: output characters */
void myput(char *s){
  printf("running myput...\n");
  for(;*s!='\n';s++){
    //printf("decimal=%d char=%c \n",*s,*s);
  }
}


/* mystringcmp: compare strings */
int mystringcmp(char *s, char *t){
  //printf("Entering mystringcmp...\n");
  //printf("Comparing %s to %s\n",s,t);
  int done=FALSE,same=FALSE;
  for (; *s==*t; s++, t++){
    //printf("%d=?=%d and %c=?=%c",*s,*t,*s,*t);
        if (*s=='\n'){
          //printf("returning true\n");
          return TRUE;
        }
    }
  //printf("returning false\n");
  return FALSE;
}

/* mystringcopy */
void mystringcopy (char *s, char *t){
  while((*s++ = *t++) != '#')
    ;
  --s;
  *s='\n';
}
