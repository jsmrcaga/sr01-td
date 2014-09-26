#include <stdio.h>

	typedef struct{
		float x;
		float y;
	} complexe;

	union valeur{
		int entier;
		float reel;
		complexe uComplexe;
	};

	typedef enum {ENTIER, REEL, COMPLEXE} genre;

	typedef struct {
		enum genre ;
		union valeur;
	}nombre;

void Saisir_Nombre();

void main(){


}

void Saisir_Nombre(valeur *Val){
	char choix;

	printf("Voulez-vous choisir un entier(i), un reel (r) ou un complexe(c)?\n");
	scanf("%c", choix);

	switch(choix){
		case 'i':
			printf("Entrez l'entier: ");
			scanf("%d", &Val.entier);
			break;
		
		case 'r':
			printf("Entrez le reel: ");
			scanf("%f", &Val.reel);
			break;
		
		case 'c':
			printf("Entrez le complexe X: ");
			scanf("%d", &Val.uComplexe.x);
			printf("Entrez le complexe Y: ");
			scanf("%d", &Val.uComplexe.y);
			break;

	}
}

