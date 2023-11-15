#include <stdio.h>
#include <stdlib.h>

void IngresarVentas(float ventas[4][7]) {
	for (int i = 0; i < 4; i++) {
		printf("Semana %d:\n", i + 1);
		for (int j = 0; j < 7; j++) {
			printf("Ingrese las ventas del día %d: ", j + 1);
			scanf("%f", &ventas[i][j]);
		}
	}
}

int main() {
	int semanaMaxVentas = 1, i, j;
	float ventas[4][7], totalVentas[4] = {0}, promedioVentas[4] = {0}, maxVentas = 0;
	
	
	IngresarVentas(ventas);
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 7; j++) {
			totalVentas[i] += ventas[i][j];
		}
		promedioVentas[i] = totalVentas[i] / 7;
		
		if (totalVentas[i] > maxVentas) {
			
			maxVentas = totalVentas[i];
			
			semanaMaxVentas = i + 1;
		}
	}
	
	printf("Total de ventas por  cada semana:\n");
	for (i = 0; i < 4; i++) {
		printf("Semana %d: %.2f\n", i + 1, totalVentas[i]);
		
	}
	printf("Semana de mayor venta: semana %d\n", semanaMaxVentas);
	
	
	printf("Promedio de ventas por semana:\n");
	for (i = 0; i < 4; i++) {
		printf("Semana %d: %.2f\n", i + 1, promedioVentas[i]);
	}
	

	
	system("pause");
	return 0;
}
