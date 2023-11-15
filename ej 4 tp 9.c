#include <stdio.h>
#include <stdlib.h>

void Desordenar(int matriz[2][7], int indice) {
	for (int j = 0; j < 7; j++) {
		if (j == 0) {
			matriz[1][j] = matriz[0][indice - 1];
		} else {
			matriz[1][j] = matriz[0][j - 1];
		}
	}
}

int main() {
	int matriz[2][7] = {0}, i, j;
	
	for (i = 0; i < 7; i++) {
		printf("Ingrese el elemento %d: ", i + 1);
		scanf("%d", &matriz[0][i]);
	}
	
	printf("Ingrese el índice para desordenar: ");
	scanf("%d", &i);
	
	Desordenar(matriz, i);
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 7; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
