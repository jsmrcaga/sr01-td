      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>


 int main(void)
  {
    int x = 03, y = 02, z = 01;
    int a, b;

    a = x | y & ~z;            
    b = x ^ y & ~z;            
    printf("a=%d  b=%d \n", a, b);   
   }