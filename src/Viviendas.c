/*
 * Viviendas.c
 *
 *  Created on: 25 may. 2022
 *      Author: 54113
 */
#include <stdio.h>
#include <stdlib.h>
#include "Viviendas.h"
#define VACIO 1

	int MenuOpciones()
	{
		int opciones;
		printf("**************************ELIJA LAS OPCIONES ***************************************\n");
		utn_getNumero(&opciones,"-1)-Alta de Viviendas :\n-2)-Modificar Viviendas :\n-3)-Baja de Viviendas :\n-4)-Listar Viviendas:\n-5)-Listar Censistas:\n"
				"-6)-Salir de menu:\n","Error ingrese los datos pedidios\n",1,6,3);

		return opciones;
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
	void inicializarVivienda(eVivienda *lista , int tam)
	{
		int i;
		for(i=0;i<tam;i++){
			if(lista!=NULL && tam >0){
				lista[i].isEmpty = VACIO;
			}
		}


	}
	int CargaDeViviendas(eVivienda *lista, int tam, int idVivienda)
	{
		int retorno =0;


		return retorno;
	}
