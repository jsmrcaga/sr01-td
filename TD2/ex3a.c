#include <stdio.h>

	typedef struct{
		float x;
		float y;
	} complexe;

void Afficher(complexe);
//Afficher - affiche la partie im et re d'un nombre complexe
complexe Somme (complexe, complexe);
//Somme - permet de faire la somme de deux nombres complexes


void main(){
	
	complexe p;
	p.x = 8;
	p.y = 6;

	

	Afficher(p);

	
}

void Afficher(complexe nComplexe){
	if(nComplexe.y < 0){
		printf("%g - %gi\n", nComplexe.x, nComplexe.y);
	}else if (nComplexe.y ==0 ){
		printf("%g\n", nComplexe.x);
	}else if(nComplexe.y > 0){
		printf("%g + %gi\n", nComplexe.x, nComplexe.y);
	}else{
		printf("Erreur\n");
	}
}

complexe Somme(complexe comp1, complexe comp2){
	complexe var;
			var.x=comp1.x + comp2.x;
			var.y=comp1.y + comp2.y;
	return var;
		// Somme.x = comp1.x + comp2.x;
		// Somme.y = comp1.y + comp2.y;

		
}