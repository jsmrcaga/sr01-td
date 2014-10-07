      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>

int main(void)
  {
    int x, y, z;
    x = 2; y = 1; z = 0;
    x = x && y || z;  
    printf("x = %d \n",x);
  }
