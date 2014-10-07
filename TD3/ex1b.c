#include <stdio.h>
#define MAX 6

void printTab(int[]);

void main(){
	int tab1[MAX]={1,2,3,4,5,6};
	int tab2[MAX]={6,5,4,3,2,1};
	int tab3[MAX];
	int *p1, *p2, *p3;
	p1=tab1;
	p2=tab2+MAX-1;
	p3=tab3;

	int i; //index
	for (i=0; i<MAX; i++){
		*p3=*p1+*p2;
		printf("|%d", *p3);
		p1++;
		p2--;
		p3++;
	}

	

}

void printTab(int tab[]){
	int i;
	for (i=0; i<MAX; i++){
		printf("|");
		printf("%d", tab[i]);

	}
}