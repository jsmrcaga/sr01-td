#include <stdio.h>
#define TAILLE 13
#define NBRE 3 

void afficheSapin(int);
	//afficheSapin - affiche un sapin
		//int - largeur du sapin
void afficheForet(int, int);
	// afficheForet - affiche int sapins de int longueur
		//int - nombre de sapins
		//int - largeur de chaque sapin

void main(){

	afficheSapin(TAILLE);

}

void afficheSapin(int largeur){
	int i, j, k, p=0, whiteTrunc;
	for (i=1; i<=largeur; i+=2){
		for (j=1; j<= ((largeur-1)/2)-p; j++){
			printf(" ");
		}
		for (k=1; k<=i; k++){
			printf("*");
		}
		p++;

		
		printf("\n");
	}

	whiteTrunc=((largeur-1)/2)-1;

	for (k=0; k<4; k++){

		for (i=0; i<whiteTrunc; i++){
			printf(" ");
		}
	
		for (j=1; j<=3; j++){
			printf("|");
		}

		printf("\n");

	}		


}

