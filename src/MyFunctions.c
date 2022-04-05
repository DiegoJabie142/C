#include "MyFunctions.h"
#include <stdio.h>
#include <stdlib.h>

float SetFloatRange(float min, float max, char message[]){

	float number;

	int flag = 0;

	do{
		if(flag == 0){
			printf("\nIngrese %s entre los valores %.2f y %.2f: ", message, min, max);
			scanf("%f", &number);
			flag =1;
		}else{
			printf("\nError. Reingrese %s entre los valores %.2f y %.2f: ", message, min, max);
			scanf("%f", &number);
		}
	}while(number>max || number < min);

	return number;
}

int SetIntRange(int min, int max, char message[]){

	int number;

	int flag = 0;

	do{
		if(flag == 0){
			printf("\nIngrese %s entre los valores %d y %d: ", message, min, max);
			scanf("%d", &number);
			flag =1;
		}else{
			printf("\nError. Reingrese %s entre los valores %d y %d: ", message, min, max);
			scanf("%d", &number);
		}
	}while(number>max || number < min);

	return number;
}

long int SetLongIntRange(long int min, long int max, char message[]){

	long int number;

	int flag = 0;

	do{
		if(flag == 0){
			printf("\nIngrese %s entre los valores %ld y %ld: ", message, min, max);
			scanf("%ld", &number);
			flag =1;
		}else{
			printf("\nError. Reingrese %s entre los valores %ld y %ld: ", message, min, max);
			scanf("%ld", &number);
		}
	}while(number>max || number < min);

	return number;
}

int UtnGetCaracter(char *pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos){
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos < 0)

	return retorno;
}
