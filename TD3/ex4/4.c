      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>


  int main(void)
  {
    int x = 3, z = 0;          
    z = x / ++x;           
    printf("x=%d    z=%d  \n",x, z);    
  }