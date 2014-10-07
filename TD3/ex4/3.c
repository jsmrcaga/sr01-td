      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>

 int main(void)
  {
    int x = 2, y = 1, z = 0;
    z += -x++ + ++y;  
    printf("x=%d  y=%d  z=%d  \n",x, y, z);  
  }