/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MyFunctions.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcion = 0;
	char opcionCase2 = "0";

	int flagKm = 0;
	int km;

	int flagPrecioVuelos = 0;
	long int precioVueloAerolineas = 0;
	long int precioVueloLatam = 0;


	do{

		system("cls");

		if(flagKm == 0){
			printf("1. Ingresar Kilómetros: (km = x)\n");
		}else{
			printf("1. Ingresar Kilómetros: (km actuales = %d)\n", km);
		}

		if(flagPrecioVuelos == 0){
			printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam:\n");
		}else if(flagPrecioVuelos == 1){
			printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas:\n   - Precio vuelo Latam: %ld\n", precioVueloLatam);
		}else if(flagPrecioVuelos == 2){
			printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam: \n", precioVueloAerolineas);
		}else{
			printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam: %ld\n", precioVueloAerolineas, precioVueloLatam);
		}


		printf("\n3. Calcular todos los costos:\n   a) Tarjeta de débito (descuento 10%%)\n   b) Tarjeta de crédito (interés 25%%)\n   c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinosn)\n   d) Mostrar precio por km (precio unitario)\n   e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
		printf("\n4. Informar Resultados\n Latam:\n a) Precio con tarjeta de débito: r \n b) Precio con tarjeta de crédito: r\n c) Precio pagando con bitcoin: r \n d) Precio unitario: r\nAerolíneas:\n a) Precio con tarjeta de débito: r \n b) Precio con tarjeta de crédito: r\n c) Precio pagando con bitcoin: r \n d) Precio unitario: r \n");
		printf("\n5. Carga forzada de datos\n");
		printf("\n6. Salir\n");

		opcion = SetIntRange(1,6,"su opción");

		switch(opcion){
			case 1:
				system("cls");
				if(flagKm == 0){
					printf("1. Ingresar Kilómetros: (km = x)\n");
					km = SetIntRange(1, 20000, "kilometros de su viaje");
					flagKm = 1;
				}else{
					printf("1. Ingresar Kilómetros: (km actuales = %d)\n" , km);
					km = SetIntRange(1, 20000, "kilometros de su viaje");
				}
				break;
			case 2:
				system("cls");

				if(flagPrecioVuelos == 0){
						printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam:\n");
					}else if(flagPrecioVuelos == 1){
						printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas:\n   - Precio vuelo Latam: %ld\n", precioVueloLatam);
					}else if(flagPrecioVuelos == 2){
						printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam: \n", precioVueloAerolineas);
					}else{
						printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas = y, Latam = z)\n   - Precio vuelo Aerolíneas: %ld\n   - Precio vuelo Latam: %ld\n", precioVueloAerolineas, precioVueloLatam);
				}
				scanf(" %c", &opcionCase2);

				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
		}
	}while(opcion!=6);

	system("cls");
	printf("\tHA SALIDO DEL PROGRAMA\t");
	system("pause");

	return EXIT_SUCCESS;
}
