#include <stdio.h>
#include <stdlib.h>

int CalcularSuma(int acumulado, int arreglo[15][12]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {
			acumulado += arreglo[i][j];
		}
	}
	return acumulado;
}


int main() {
	int arreglo[15][12] = {0}, menorElemento, sumaTotal = 0, negativosEnFilas5a9 = 0, i, j;
	
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 12; j++) {
			printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
			scanf("%d", &arreglo[i][j]);
			
			if (i == 0) {
				menorElemento = arreglo[i][j];
			} else {
				if (menorElemento > arreglo[i][j]) {
					menorElemento = arreglo[i][j];
				}
			}
		}
	}
	
	sumaTotal = CalcularSuma(sumaTotal, arreglo);
	
	for (i = 4; i < 8; i++) {
		for (j = 0; j < 12; j++) {
			if (arreglo[i][j] < 0) {
				negativosEnFilas5a9++;
			}
		}
	}
	
	printf("La suma de las primeras 5 filas es: %d\n", sumaTotal);
	printf("El menor número es %d\n", menorElemento);
	p
		printf("La cantidad de negativos en las filas 5 a 9 es: %d\n", negativosEnFilas5a9); 
	
	system("pause");
	
	return 0;
}
