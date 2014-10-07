#include <stdio.h>

void main(){
	int depMois, date, jourDate;

	char  *jour[7]={"lundi", "mardi", "mercredi","jeudi","vendredi","samedi","dimanche"};

	printf("Donnez l'indice du premier jour du mois ");
	scanf("%d", &depMois);
	depMois--; //car les indices commencent a 0

	printf("Donnez la date presente: ");
	scanf("%d", &date);
	printf("\n");

	// jourDate = ((depMois + date)-1)% 7;
	*jour = ((depMois + date)-1)% 7;
	
	printf("%s\n", *jour);

}

