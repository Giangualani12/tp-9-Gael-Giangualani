#include <stdio.h>
#include <stdlib.h>

float CalcularSuma(float acumulado, float registros[20][9], int fila, int columna) {
	return acumulado += registros[fila][columna];
}

int main() {
	int fila, columna;
	float registros[20][9] = {0}, totalAcumulado = 0;
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 9; columna++) {
			if (columna == 0) {
				registros[fila][columna] = fila + 1;
			} else {
				if (columna == 8) {
					registros[fila][columna] = 0;
				} else {
					printf("Ingrese Km recorridos en el dia %d para el bondi %d: ", columna, fila + 1);
					scanf("%f", &registros[fila][columna]);
				}
			}
		}
	}
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 1; columna < 9; columna++) {
			if (columna != 8) {
				totalAcumulado = CalcularSuma(totalAcumulado, registros, fila, columna);
			} else {
				registros[fila][8] = totalAcumulado;
			}
		}
		totalAcumulado = 0;
	}
	
	printf("N°\tdia1\tdia2\tdia3\tdia4\tdia5\tdia6\tdia7\tdiaTotal\n");
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 9; columna++) {
			printf("%.2f\t", registros[fila][columna]);
		}
		printf("\n");
	}
	system("pause");
	
	return 0;
}
