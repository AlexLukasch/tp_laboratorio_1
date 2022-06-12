#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "Validaciones.h"
#define TRUE 1
#define FALSE 0

int menu(char opciones[])
{
	int opcion;
	printf("%s", opciones);
	//scanf("%d", &opcion);
	opcion = getInt("Elija una opcion: \n", "Error, ¡Ingrese una opcion valida!\n");
	return opcion;
}

int initPassengers(ePassenger list[], int len)
{
	int i;
	int output;
	output = -1;

	if(list != NULL && len > 0)
	{
		output = 0;
		for(i=0;i<len;i++)
		{
			list[i].isEmpty = TRUE;
		}
	}
	else
	{
		printf("=====================================\n"
			   "     NO HAY LUGARES DISPONIBLES\n"
			   "=====================================\n");
	}

return output;
}

int altaPasajeros(ePassenger list[], int len)
{
	int index;
	int output;

	if(list != NULL && len > 0)
	{

		index = buscarEspacioLibre(list, len);

		if(index != -1)
		{
			//list[index] =
			output = 0;
		}

	}
	return output;
}

int buscarEspacioLibre(ePassenger lista[], int tam)
{
	int i;
	int indice = -1;

	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty == TRUE)
		{
			indice = i;
			break;
		}
	}

	return indice;
}

int hardcodePassengers(ePassenger list[])
{
	int output;
	int i;
	output = -1;
	char id[]={1,2,3,4,5};
	char name[][20]={"Alex","Luca","Fabio","Mati","David"};
	char lastName[][20]={"Lukasch","Mendez","Moreno","Quiroz","Fernandez"};
	float price[]={1000,1500,2000,2500,3000};
	char flycode[][10]={"AAA100","EEE222","ZZZ444","RRR123","OOA321"};
	int typePassenger[]={1,2,3,1,3};
	int statusFlight[]={1,2,2,1,1};
	int isEmpty[]={FALSE,FALSE,FALSE,FALSE,FALSE};

	if(list != NULL)
	{
		for(i=0;i<5;i++)
		{
			list[i].id=id[i];
			strcpy(list[i].name,name[i]);
			strcpy(list[i].lastName,lastName[i]);
			list[i].price=price[i];
			strcpy(list[i].flyCode,flycode[i]);
			list[i].typePassenger=typePassenger[i];
			list[i].statusFlight=statusFlight[i];
			list[i].isEmpty=isEmpty[i];
		}
		output = 1;
	}
	return output;
}

int loadPassengers(ePassenger list[], int len)
{
	int output;
	int id;
	char name[30];
	char lastName[50];
	float price;
	int typePassenger;
	char flycode;
	output = -1;

	getName(name, "Ingrese el nombre: \n", "Error, ingrese un nombre valido\n", len);
	getName(lastName, "Ingrese el apellido: \n", "Error, ingrese un apellido valido\n", len);
	//hace getfloat
	//hacer getPassegerType


	return output;
}

int addPassenger(ePassenger list[], int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[])
{
	int output;
	int index;
	int i;
	output = 0;

	if(list != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			index = buscarEspacioLibre(list, len);
			if(index != -1)
			{
				strcpy(list[i].name,name);
				strcpy(list[i].lastName,lastName);
				list[i].price = price;
				strcpy(list[i].flyCode,flycode);
				list[i].typePassenger = typePassenger;
				list[i].statusFlight = 1;
				list[i].isEmpty = FALSE;
			}
		}
		output = -1;
	}

	return output;
}

int listPassengers(ePassenger list[], int len)
{
	int output;
	int i;
	output = -1;

	for(i=0;i<len;i++)
	{
		if(list[i].isEmpty == FALSE)
		{
		listPassenger(list[i]);
		}
	}
	output = 1;
	return output;
}

int listPassenger(ePassenger list)
{
	int output;
	char tipo[15];
	char estado[15];
	output = 1;
	switch(list.typePassenger)
	{
		case 1:
			strcpy(tipo,"EJECUTIVO");
			break;

		case 2:
			strcpy(tipo,"COMERCIAL");
			break;

		case 3:
			strcpy(tipo,"TURISTA");
			break;
	}

	switch(list.statusFlight)
	{
		case 1:
			strcpy(estado,"NORMAL");
			break;

		case 2:
			strcpy(estado,"DEMORADO");
			break;
	}

	printf("Nombre: %s\n Apellido: %s\n Precio: %.2f\n Codigo: %s\n Tipo de Pasajero: %s\n Estado de vuelo: %s\n\n ", list.name, list.lastName, list.price, list.flyCode, tipo, estado);
	return output;
}
