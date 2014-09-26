#include <stdio.h>
void main(){
	printf("Void: %d\n", sizeof(void));
	printf("Char: %d\n", sizeof(char));
	printf("Short: %d\n", sizeof(short));
	printf("Int: %d\n", sizeof(int));
	printf("Long: %d\n", sizeof(long));
	printf("Float: %d\n", sizeof(float));
	printf("Double: %d\n", sizeof(double));
	printf("long double: %d\n", sizeof(long double));
	printf("\n");
	printf("Test de multiplication avec var (int x)");
	int x;
	printf("4*sizeof x: %d\n", 4 * sizeof(x));
	printf("sizeof 4*x: %d\n", sizeof(4 * x));
}
