//EXERCICE TRES IMPORTANT
//A REVOIR

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

	enum genre {ENTIER, REEL, COMPLEXE};


	typedef struct nombre{
		enum genre type;
		union valeur valeur;
	}nombre;

nombre Saisir_Nombre();
void Afficher_Nombre(nombre);

void main(){
	nombre poulet = Saisir_Nombre();
	Afficher_Nombre(poulet);
}

nombre Saisir_Nombre(){
	char choix;
	nombre temp;
	printf("Voulez-vous choisir un entier(i), un reel (r) ou un complexe(c)?\n");
	scanf("%c", &choix);

	switch(choix){
		case 'i':
			temp.type = ENTIER;
			printf("Entrez l'entier: ");
			scanf("%d", &temp.valeur.entier);
			break;
		
		case 'r':
			temp.type = REEL;
			printf("Entrez le reel: ");
			scanf("%f", &temp.valeur.reel);
			break;
		
		case 'c':
			temp.type = COMPLEXE;
			printf("Entrez le complexe X: ");
			scanf("%f", &temp.valeur.uComplexe.x);
			printf("Entrez le complexe Y: ");
			scanf("%f", &temp.valeur.uComplexe.y);
			break;

	}
	return temp;
}


void Afficher_Nombre(nombre nB){

	if(nB.type==ENTIER){
		printf("Le nombre est un entier: %d\n", nB.valeur.entier);
	}else if(nB.type==REEL){
		printf("Le nombre est un reel: %g\n", nB.valeur.reel);
	}else if(nB.type==COMPLEXE){
		printf("Le nombre est un complexe de Re: %g\n", nB.valeur.uComplexe.x);
		printf("Le nombre est un complexe de Im: %g\n", nB.valeur.uComplexe.y);
	}else{
		printf("Erreur");
	}

}
