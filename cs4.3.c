/* cs4.3 simple calc */
#include <stdio.h>
#include <ctype.h> /* defines functions that identify char values as various
types of characters including spaces, digits, punctuation, control
characters, etc (e.g. int isspace(int c) checks for spaces) */
#define MAX 250


int get_line(char c[], int max);
double string_to_float(char s[]);


/* simple calculator */
int main(void){
  double sum;
  char line[MAX];
  sum=0;
  while (get_line(line, MAX) > 0)
  printf("\t %0.4f \n",sum+= string_to_float(line)); //
  return 0;
} // end of main


/* get_line function */
int get_line(char c[], int max){
  int a, i;
  i=0;
  while (--max > 0 && (a=getchar()) != EOF && a != '\n')
  c[i++] = a;
  if (a=='\n')
  c[i++]= a;
  c[i]='\0';
  return i;
} // end get_getline



/* string_to_float function */
double string_to_float(char s[]){
  double val, power;
  int i, sign;
  for (i=0; isspace(s[i]);i++) // comment #1
    ;
  sign = (s[i]=='-') ? -1 : 1; // comment #2
  if (s[i] == '+' || s[i] =='-')
  i++;
  for (val = 0.0; isdigit(s[i]); i++) // comment #3
    val = 10.0 * val + (s[i] - '0'); // s[i] - ’0’ converts char value to decimal value
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++){ // comment #4
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  } // end for loop
  return sign * val / power;
} // end string_to_float function
