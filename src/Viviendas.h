/*
 * Viviendas.h
 *
 *  Created on: 25 may. 2022
 *      Author: 54113
 */

#ifndef VIVIENDAS_H_
#define VIVIENDAS_H_


#endif /* VIVIENDAS_H_ */


typedef struct
{
	int idVivienda;
	char calle[25]; //(máximo 25 caracteres)
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda; //(1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO)
	int legajoCensista;// (debe existir) Validar
	int isEmpty;
}eVivienda;

typedef struct
{
	int legajoCensista;
	char nombre[25];
	int edad;
	int telefono;
}eCencista;

int MenuOpciones();
void inicializarVivienda(eVivienda *lista, int tam);
 eVivienda AltaDeUnaViviendas(void);
