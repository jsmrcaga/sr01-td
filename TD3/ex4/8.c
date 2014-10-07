      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>

  int main(void)
  {
    int x = -1, y = -1, z = -1;
    int a;
    a = ++x && ++y || ++z;     
    printf("y=%d  a=%d \n", y, a); 
  }