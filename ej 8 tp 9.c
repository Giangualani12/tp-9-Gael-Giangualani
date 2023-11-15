#include <stdio.h>
#include <stdlib.h>

int ContarNegativos(int matriz[5][6]) {
	int negativos = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (matriz[i][j] < 0) {
				negativos++;
			}
		}
	}
	return negativos;
}

int ContarCerosDiagonal(int matriz[5][6]) {
	int ceros = 0;
	for (int i = 0; i < 5; i++) {
		if (matriz[i][i] == 0) {
			ceros++;
		}
	}
	return ceros;
}

int main() {
	int matriz[5][6], i, j, cantidadNegativos = 0, cantidadCeros = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	cantidadNegativos = ContarNegativos(matriz);
	cantidadCeros = ContarCerosDiagonal(matriz);
	
	printf("La cantidad de números negativos es: %d\n", cantidadNegativos);
	printf("La cantidad de ceros en la diagonal principal es: %d\n", cantidadCeros);
	
	system("pause");
	return 0;
}
