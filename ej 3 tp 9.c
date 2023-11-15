#include <stdio.h>
#include <stdlib.h>

void CargarCompras(float registros[5][6]) {
	for (int i = 0; i < 5; i++) {
		printf("Cliente nro %d\n", i + 1);
		for (int j = 0; j < 6; j++) {
			if (j == 0) {
				registros[i][j] = i + 1;
			} else {
				printf("Ingrese la compra en el dia %d: ", j);
				scanf("%f", &registros[i][j]);
			}
		}
	}
}

int main() {
	int i, j, dia;
	float registros[5][6] = {0}, cliente, ventaMaxima = 0;
	
	CargarCompras(registros);
	
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 6; j++) {
			if (ventaMaxima < registros[i][j]) {
				ventaMaxima = registros[i][j];
				cliente = registros[i][0];
				dia = j;
			}
		}
	}
	
	printf("La mayor venta fue %.2f del cliente %.2f en el dia %d\n", ventaMaxima, cliente, dia);
	system("pause");
	
	return 0;
}
