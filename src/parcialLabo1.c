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
#define T 100
int main(void) {

	setbuf(stdout,NULL);
	int opcion;
	int idVivienda;
	idVivienda =0;
	opcion=0;
	eVivienda casas;

	inicializarVivienda(&casas , T);

	do{
		opcion = MenuOpciones();
		switch(opcion)
		{
		case 1:

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
