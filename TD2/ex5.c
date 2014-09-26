#include <stdio.h>
#define NBRETUDIANTS 140;

typedef struct{
	char nom[25];
	char prenom[25];
	char n_compte[8];
}Etudiant;


Etudiant Saisir_Etudiant();
//Saisir-Etudiant - permet la saisie d'un etudiant
void Afficher_Etudiant(Etudiant);

void main(){

	Etudiant sr01[140]; //ne marche pas avec la constante, cause inconnue

	sr01[0] = Saisir_Etudiant();

	Afficher_Etudiant(sr01[0]);
}

Etudiant Saisir_Etudiant(){
	Etudiant temp;
	printf("Saisisez le nom de l'etudiant [25 char max]: ");
	scanf("%s", &temp.nom);

	printf("Saisisez le prenom de l'etudiant [25 char max]: ");
	scanf("%s", &temp.prenom);

	printf("Saisisez le login SR01 de l'etudiant [8 char max]: ");
	scanf("%s", &temp.n_compte);

	return temp;
}

void Afficher_Etudiant(Etudiant etu){
	printf("L'Etudiant s'appelle %s %s\n", etu.nom, etu.prenom);
	printf("Son login SR01 est %s\n", etu.n_compte);
}