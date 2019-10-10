/* Aldenpointertest.c */

int main(){


  int a[10] = {5,9,17,81};
  *a+=2;
  int **b  = &a;
  b+=0;
  printf("%d\n", *b);





}
