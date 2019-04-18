/* point.c */
#include <stdio.h>


int main() {


  int x=1, y=4, z=-7;

  int *ip;

  ip = &x;


  printf("x=%d, y=%d, z=%d\n",x,y,z);
  printf("The value of the cell that ip points to is: %d\n",*ip);

  ip = &y;

  printf("x=%d, y=%d, z=%d\n",x,y,z);
  printf("The value of the cell that ip points to is: %d\n",*ip);

  ip = &z;

  printf("x=%d, y=%d, z=%d\n",x,y,z);
  printf("The value of the cell that ip points to is: %d\n",*ip);



  return 0;
}
