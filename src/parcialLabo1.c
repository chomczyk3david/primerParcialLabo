/*
 ============================================================================
 Name        : parcialLabo1.c
 Author      : david
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Viviendas.h"
#define T 3

int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int idVivienda;
	idVivienda =2000;
	opcion=0;
	eVivienda casas;

	inicializarVivienda(&casas , T);

	do{
		opcion = MenuOpciones();
		switch(opcion)
		{
		case 1:
				if(!CargaDeViviendas(&casas, T, idVivienda))
				{
					printf("Carga exitosa:\n");
				}else{
					printf("no se pudo hacer su ingreso:\n");
				}

		break;
		case 2:
		break;
		case 3:
			break;
		case 4:
			break;
		case 5:

			break;
		case 6:
			break;

		}

	}while(opcion!=6);


	return EXIT_SUCCESS;
}
