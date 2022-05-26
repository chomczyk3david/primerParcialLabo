/*
 * input.c
 *
 *  Created on: 26 may. 2022
 *      Author: 54113
 */


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Input.h"
#include "Viviendas.h"

int PedirNumeros(char mensaje[], char mensajeError[], int min,int max)
{
	int numero;
	printf("%s",mensaje);
	scanf("%d", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%d", &numero);
		}
	return numero;
}

float PedirFlotante(char mensaje[], char mensajeError[], int min,int max)
{
	float numero;
	printf("%s",mensaje);
	scanf("%f", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%f", &numero);
		}
return numero;
}
void getString(char cadena[],char mensaje[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);
    strcpy(cadena, auxiliar);

}
int utn_getNumero(int *pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    int bufferInt;
        if(pResultado!=NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >=0)
        {
            do
            {
                printf("%s",mensaje);
                scanf("%d",&bufferInt);
                if(bufferInt >= minimo && bufferInt <= maximo)
                {
                    *pResultado = bufferInt;
                    retorno = 0;
                    break;
                }
                else
                {
                    printf("%s",mensajeError);
                    reintentos--;
                }
            }while(reintentos >=0);
        }
    return retorno;
}
