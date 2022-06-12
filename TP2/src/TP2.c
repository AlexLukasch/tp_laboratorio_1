/*
 ============================================================================
 Name        : TP2.c
 Author      : Alexander Lukasch Belbey
 Version     : 0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "Validaciones.h"
#define MAX_PSGRS 2000
#define TRUE 1
#define FALSE 0

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int retorno;
	ePassenger Passenger[MAX_PSGRS];


	initPassengers(Passenger, MAX_PSGRS);

	do
	{
		opcion = menu("=====================================\n"
				 	  "|           MENU PRINCIPAL          |\n"
				 	  "=====================================\n"
				 	  "OPCIONES: \n"
				 	  "1- ALTA\n"
				 	  "2- MODIFICAR\n"
				 	  "3- BAJA\n"
				 	  "4- INFORMAR\n"
				 	  "5- FORZAR CARGA DE DATOS\n"
				 	  "6- SALIR\n");

		switch(opcion)
		{
			case 1:
				printf("Estoy en el caso 1\n");
				/*if( == 0)
				{
					printf("carga exitosa!!!");
				}
				else
				{
					printf("error!!!");
				}*/
				loadPassengers(Passenger, MAX_PSGRS);
				break;

			case 2:
				printf("Estoy en el caso 2\n");
				break;

			case 3:
				printf("Estoy en el caso 3\n");
				break;

			case 4:
				printf("INFORMAR\n");
				listPassengers(Passenger, MAX_PSGRS);
				break;

			case 5:
				printf("HARCODEO\n");
				retorno = hardcodePassengers(Passenger);
				if(retorno != -1)
				{
					printf("=====================================\n"
						   "     DATOS FORZADOS CORRECTAMENTE\n"
						   "=====================================\n");
				}
				break;

			case 6:
				printf("!Hasta luego!\n");
				break;

			default:
				printf("Error, ¡Ingrese una opcion valida!\n");
				break;

		}

	}while(opcion != 6);







	/*int i;
	for(i=0;i<MAX_PSGRS;i++)
	{
		printf("%d\n", Passenger[i].isEmpty);//Inicializa bien
	}*/
	return EXIT_SUCCESS;
}
