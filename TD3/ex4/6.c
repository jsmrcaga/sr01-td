      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>


  int main(void)
  {
    int x = 01, y = -01;
    int a;
    a = ~x | x;                 
    y <<= 3;
    printf("a=%d  y=%d \n", a, y);

      }