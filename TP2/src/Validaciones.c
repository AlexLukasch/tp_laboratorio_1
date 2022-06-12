#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "Validaciones.h"
#define MAX_CHARS 101
/*
simbolos:
*/
void getString(char cadena[], char mensaje[], char mensajeError[], int tam)
{
	char auxiliar[1024];
	int cantidadLetras;

	printf("%s",mensaje);
	fflush(stdin);
	gets(auxiliar);

	cantidadLetras = strlen(auxiliar);
	while(cantidadLetras > tam)
	{
		printf("%s",mensajeError);
		fflush(stdin);
		gets(auxiliar);
		cantidadLetras = strlen(auxiliar);
	}

	strcpy(cadena, auxiliar);
}

int esNumerica(char auxiliar[])
{
	int i;
	int retorno = -1;

	if(auxiliar != NULL)
	{
		retorno = 1;
		for(i=0;i<strlen(auxiliar);i++)
		{
			//isdigit(caracter) 0 sino es un numero y mayor a 0 si es un numero
			if(isdigit(auxiliar[i])==0)
			{
				retorno = 0;
				break;//rompe si encontro un error
			}
		}
	}

	return retorno;
}

int getInt(char mensaje[], char mensajeError[])//valida que sea un numero
{
	int retorno = -1;
	int esNumero;
	char auxiliar[30];

	getString(auxiliar, mensaje, mensajeError, 30);// donde se va a guardar, el mensaje que pide el ingreso, el limite de caracteres.

	while(esNumerica(auxiliar) < 1)
	{
		getString(auxiliar, mensajeError, mensajeError, 30);// donde se va a guardar, el mensaje que pide el ingreso, el limite de caracteres.
	}

	esNumero = atoi(auxiliar);
	retorno = esNumero;

	return retorno;
}

//funciona, testear para buscar errores
void getName(char cadena[], char mensaje[], char mensajeError[], int tam)
{
	char auxiliar[1024];
	int cantidadLetras;
	int contadorNum;
	int i;
	contadorNum = 0;

	printf("%s",mensaje);
	fflush(stdin);
	gets(auxiliar);
	cantidadLetras = strlen(auxiliar);

	for(i=0;i<cantidadLetras;i++)
	{
		//printf("Caracter leido %c\n", auxiliar[i]);
		if(auxiliar[i] > 47 && auxiliar[i] < 58)
		{
			contadorNum++;
			printf("El contador de numeros es: %d\n",cantidadLetras);
			break;
		}
	}

	while(cantidadLetras > tam || contadorNum > 0)
	{
		printf("%s",mensajeError);
		fflush(stdin);
		gets(auxiliar);
		cantidadLetras = strlen(auxiliar);
		contadorNum = 0;
		for(i=0;i<cantidadLetras;i++)
		{
			if(auxiliar[i] > 47 && auxiliar[i] < 58)
			{
				//printf("El caracter comparado en el segundo for es: %c\n",auxiliar[i]);
				contadorNum++;
				break;
			}
		}

	}

	strcpy(cadena, auxiliar);
}
