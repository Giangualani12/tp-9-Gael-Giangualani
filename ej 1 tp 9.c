#include <stdio.h>
#include <stdlib.h>

void IngresarMatriz(int matriz[4][4]){
	printf("Ingrese los elementos de la matriz:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
	
	int main() {
		int matriz[4][4], i, j, cont0=0;
		
		IngresarMatriz(matriz);
		
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				printf("%d\t", matriz[i][j]);
				if(matriz[i][j] == 0){
					cont0++;
				}
			}
			printf("\n");
		}
		
		printf("Hay %d ceros en la matriz.\n", cont0);
		system("pause");
		return 0;
	}
