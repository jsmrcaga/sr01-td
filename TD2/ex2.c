#include "ex2.h"

void main(){

	int tab[MAX],i; //tab and index
	for (i=0; i<MAX; i++){
		tab[i]= i+VAL;
	}

	for (i=0; i<MAX; i++){
		printf("%d\n", tab[i]);
	}
	
}
