#include <stdio.h>
#define N 10
#define M 10

void matrice_info(int[][M]);
	//int[][] matrice
void initMatrix(int[][M]);

void main(){
	int test[N][M];
	initMatrix(test);
	//definition matrice TEST
	test[0][0]=1;
	test[0][1]=-59;
	test[0][2]=34;

	test[1][0]=25;
	test[1][1]=0;
	test[1][2]=0;

	test[2][0]=-12;
	test[2][1]=-1;
	test[2][2]=0;
	// printf("%d\n",test[5][5]);
	matrice_info(test);

}

void initMatrix(int mat[][M]){
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			mat[i][j]='\0';
		}
	}
}

void matrice_info(int mat[][M]){
	int i, j, pos=0, neg=0, zer=0, 
		comptI=0, comptJ=0, nombreEl;

	for(i=0; i<N; i++){
		for (j=0; j<M; j++){

			if (mat[i][j]!='\0'){
				comptI++;
				comptJ++;
				//pas de switch avec > <
				if(mat[i][j]==0){
					zer++;
				}else if(mat[i][j]>0){
					pos++;
				}else if(mat[i][j]<0){
					neg++;
				}

			}
		}
	}

	nombreEl= comptI * comptJ;

	if(zer> (nombreEl*0.8)){
		printf("\nMatrice Creuse\n");
	}
	printf("Pos=%d\t Neg=%d\t 0=%d\t\n", pos, neg, zer);
}
