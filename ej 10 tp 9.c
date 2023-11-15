#include <stdio.h>
#include <stdlib.h>

void Mostrar(int *fila, int *columna) {
	int i;
	printf("Filas:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", fila[i]);
	}
	printf("\nColumnas:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", columna[i]);
	}
}

int main() {
	int matriz[10][10] = {0};
	int columna[10] = {0};
	int fila[10] = {0}, i, j;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			
			printf("Ingrese numero %d %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			fila[i] += matriz[i][j];
			columna[j] += matriz[i][j];
		}
	}
	
	Mostrar(fila, columna);
	system("pause");
	
	return 0;
}
