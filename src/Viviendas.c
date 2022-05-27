/*
 * Viviendas.c
 *
 *  Created on: 25 may. 2022
 *      Author: 54113
 */
#include <stdio.h>
#include <stdlib.h>
#include "Viviendas.h"
#include "input.h"
#define VACIO 1

void CensistaHarcodeado(eCencista *lista,int tam, int legajo, char nombre, int edad,int telefono)
{
	//int listas;
	 //{{100,'Ana',34,1203-2345},{101,'Juan',24,4301-54678},{102,'Sol',47,5902-37487}};
}
int MenuOpciones()
	{
		int opciones;
		printf("**************************ELIJA LAS OPCIONES ***************************************\n");
		utn_getNumero(&opciones,"-1)-Alta de Viviendas :\n-2)-Modificar Viviendas :\n-3)-Baja de Viviendas :\n-4)-Listar Viviendas:\n-5)-Listar Censistas:\n"
				"-6)-Salir de menu:\n","Error ingrese los datos pedidios\n",1,6,3);

		return opciones;
	}

void inicializarVivienda(eVivienda *lista , int tam)
	{
		int i;
		if(lista!=NULL && tam >0){
			for(i=0;i<tam;i++)
			{
				lista[i].isEmpty = VACIO;
			}
		}


	}
eVivienda AltaDeUnaViviendas(void)
	{
		eVivienda personas;


		getString(personas.calle,"ingrese nombre de calles ",5);
		personas.cantidadPersonas = PedirNumeros("ingrese cantidad de personas \n", "Error ingrese bien la cantidad:\n", 1, 20);
		personas.cantidadHabitaciones = PedirNumeros("Ingrese cantidad de habitaciones en la vivienda:\n", "ingrese un valor correcto:\n", 1, 5);
		personas.tipoVivienda = PedirNumeros("ingrese Tipo de Vivienda 1)CASA, -2)DEPARTAMENTO, -3)CASILLA, -4)RANCHO:\n", "ingrese los valores predertieminados",1 ,4 );
		personas.legajoCensista = PedirNumeros("ingrese legajo del censista", "Error censiste no exite", 2000, 9999);

		return personas;
	}
int CargaDeViviendas(eVivienda *lista, int tam, int idVivienda)
{
	int retorno =1;
	int i;
		if(lista!=NULL && tam >0 && idVivienda > 0)
		{
			for(i=0;i<tam;i++)
			{
				if(lista->isEmpty == VACIO)
				{
					*lista = AltaDeUnaViviendas();
					lista->idVivienda=idVivienda;
					idVivienda++;
					retorno =0;
				}
			}
		}

return retorno;
}
void MostrarUnCensista(eCencista *UnCencista)
{
	printf("========LISTA DE CENSISTA=========");
	printf("|LEGAJO CENSISTA| NOMBRE | EDAD | N° DE TELEFONO | \n ");
	printf(" %d  %s  %d  %d \n", UnCencista->legajoCensista,UnCencista->nombre,
								 UnCencista->edad,UnCencista->telefono);
}
void MostrarUnaVivienda(eVivienda *UnaVivienda)
{
	printf("========LISTA DE VIVIENDAS================");
	printf("| CALLE | CANTIDAD DE PERSONAS | CANTIDAD DE HABITACIONES | TIPO DE VIVIENDA |\n");
	printf(" %s  %d  %d  %d  \n",UnaVivienda->calle,UnaVivienda->cantidadPersonas,
									UnaVivienda->cantidadHabitaciones,UnaVivienda->tipoVivienda);

}
