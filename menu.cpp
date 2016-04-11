#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int opc, i, j;
float gx;

int main () {
	do {
		system("color F9");
		system("cls");
		printf("\n\n\t\t\t=============================");		
		printf("\n\t\t\t|           MENU            |");
		printf("\n\t\t\t|---------------------------|");
		printf("\n\t\t\t| 1. Cuadrados              |");
		printf("\n\t\t\t| 2. Tablas de Multiplicar  |");
		printf("\n\t\t\t| 3. Funcion                |");
		printf("\n\t\t\t| 4. Salir                  |");
		printf("\n\t\t\t=============================");
		printf("\n\t\t\t           OPCION: ");
		scanf("%d", &opc);
		system("cls");
		switch(opc) {
			case 1: 
				printf("Ingrese 2 numeros: ");
				scanf("%d%d", &i, &j);
				if (i > j) {
					do {
						printf("\n %d ----> %d", j, j*j);
						j++;
					} while(j <= i);
				} else {
					do {
						printf("\n %d ----> %d", i, i*i);
						i++;
					} while(i <= j);
				}
				break;
			case 2: 				
				for (i = 4; i <= 8; i++) {
					printf("\n\n Tabla #%d \n", i);
					for (j = 1; j <= 10; j++) {
						printf("\n%d x %d = %d", i, j, i*j);
					}
				}
				break;
			case 3: 
				printf("\n\n\tFUNCION\n");
				for (i = -10; i <= 30; i++) {
					if (i < 0) {
						gx = 6*i + i*i*i;					
					} else if (i >= 0 && i < 20) {
						gx = pow(4*i, 1.0/3.0) - 8;
					} else {
						gx = i*i*i + 2*i*i - sqrt(i);
					}
					printf("\ng(%d) = %.3f", i, gx);
				}
			case 4: 
				exit(0);
				break;
			default: 
				printf("OPCION INVALIDA");
				break;
		}
		getch();
	} while(opc != 4);
	return 0;
}
