      /*ex3b.c: Lecture de données avec sacnf()*/

#include <stdio.h>


  int main(void)
  {
    int x = 3, y = 2;
    int a;
    a = x < y ? x++ : y++;
    printf("x=%d  y=%d a=%d \n", x, y, a);   
  }