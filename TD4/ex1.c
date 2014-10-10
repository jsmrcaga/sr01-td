#include <stdio.h>
#define TAILLE 10


void chaineChar();
	//chaineChar - recup et affiche longueur chaine, nomb Maj, nomb Min, blancs, autres char
void main(){

	chaineChar();

}

void chaineChar(){
	char str[100];
	fgets(str, 100, stdin);
	// printf("La longeur de la chaine: \'%s\' est de %d ", str, strlen(str));
	int i=0, len=0,maj=0, min=0, blancs=0, autres=0;

	while(str[i]!='\0'){
		len++;
		i++;
	}
	len--; //pour recuperer une tite erreur, a check

	for (i=0; i<len; i++){
		switch(str[i]){
			case 97: case 98: case 99: case 100: case 101: 
			case 102: case 103: case 104: case 105: case 106:
			case 107: case 108: case 109: case 110: case 111:
			case 112: case 113: case 114: case 115: case 116:
			case 117: case 118: case 119: case 120: case 121: case 122:
				min++;
				break;

			case 65: case 66: case 67: case 68: case 69: 
			case 70: case 71: case 72: case 73: case 74:
			case 75: case 76: case 77: case 78: case 79:
			case 80: case 81: case 82: case 83: case 84:
			case 85: case 86: case 87: case 88: case 89: case 90:
				maj++;
				break;

			case 32:
				blancs++;
				break;
			default:
				autres++;
			}

	}	
		printf("Len= %d\t Maj=%d\t Min=%d\t White=%d\t Autres=%d\t\n", len, maj, min, blancs, autres);
}