/* count_alpha.c */
#include <stdio.h>

int main(){
  int c, i, nwhite, nother;
  int ndigit[10];
  int nloweralpha[26];

  nwhite=nother=0;
  for (i=0; i<10; i++){
    ndigit[i]=0;
  }

  for (i=0; i<26; i++){
    nloweralpha[i]=0;
  }

  while((c=getchar()) !=EOF)
    if (c>='0' && c<='9')
      ++ndigit[c-'0'];

    else if (c>='a' && c<='z')    //this is new
      ++nloweralpha[c-'a'];       //so is this

    else if (c==' ' || c=='\n' || c=='\t')
      ++nwhite;
    else
      ++nother;


  printf("digits =");
  for (i=0; i<10; ++i)
    printf(" %d", ndigit[i]);
  printf(", lower case alpha =");
  for (i=0; i<26; ++i)
    printf(" %d", nloweralpha[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);

}
