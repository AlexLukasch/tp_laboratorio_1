#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Passenger.h"

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromText(FILE* pFile , LinkedList* pArrayListPassenger)
{
	char id[50];
	char name[50];
	char lastname[50];
	char price[50];
	char flycode[50];
	char typePassenger[50];
	char statusFlight[50];
	int cantidad = 0;
	int tittle = 1;
	Passenger* auxiliar = NULL;

	if(pFile != NULL && pArrayListPassenger != NULL)
	{
		do
		{
			cantidad = fscanf(pFile,"%[^,] , %[^,] , %[^,] , %[^,] , %[^,] , %[^,] , %[^\n]\n",id,name,lastname,price,flycode,typePassenger,statusFlight);

			if(cantidad == 7 || tittle != 1)
			{
				/*
				 y dentro de passenger new parametros es que se llama a new passenger(la direccion   que devuelve malloc)
				*/

			}
			else
			{
				tittle = 0;
			}

		}while(feof(pFile)==0);
	}


	return 1;
}

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromBinary(FILE* pFile , LinkedList* pArrayListPassenger)
{

    return 1;
}
