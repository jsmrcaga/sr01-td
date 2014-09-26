#include <stdio.h>

	typedef struct{
		float x;
		float y;
	} complexe;

void Afficher(complexe);
//Afficher - affiche la partie im et re d'un nombre complexe
complexe Somme (complexe, complexe);
//Somme - permet de faire la somme de deux nombres complexes
complexe Produit(complexe, complexe);

void main(){
	
	complexe p;
	p.x = 8;
	p.y = 6;

	complexe q;
	q.x=2;
	q.y=24;

	// Somme(p,q);

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
	
		// Somme.x = comp1.x + comp2.x;
		// Somme.y = comp1.y + comp2.y;

		
}

complexe Produit(complexe comp1, complexe comp2){
	 // (x + yi) * (u + vi) = (x*u - y*v) + (y*u + x*v)i

}