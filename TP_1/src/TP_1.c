/*Lukasch Belbey Alexander
 ============================================================================
 Name        : TP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
codigo ASCII:
%=37
*/
#include <stdio.h>
#include <stdlib.h>
#include "TP_1 Funciones.h"

int main(void)
{
	//declaro variables
	setbuf(stdout, NULL);
	int opcion;
	int kilometros;

	float precioAerolineas;
	float precioLatam;
	float precioDebAerolineas;
	float precioCredAerolineas;
	double precioBitAerolineas;
	float precioKmAerolineas;

	kilometros = 0;//inicializo estas 3 variables en 0 para que al ser mostradas en el menu no muestren basura
	precioAerolineas = 0;
	precioLatam = 0;

	float precioDebLatam;
	float precioCredLatam;
	double precioBitLatam;
	float precioKmLatam;

	float diferencia;

	int banderaKilometros;
	int banderaPrecios;
	int banderaCalculos;
	int banderaForzados;

	banderaKilometros=0;//inicializo las banderas
	banderaPrecios=0;
	banderaCalculos=0;
	banderaForzados=0;
	//el menu y su logica van dentro de un do while para que se ejecute la primera vez, y solo salga del menu si el usuario elige la opción 6.
	do
	{
		opcion = mostrarMenu(kilometros, precioAerolineas, precioLatam);//se muestra el menu con funcion
		switch(opcion)
		{
			case 1 ://funcion y bandera opcion 1
				kilometros = opcion1();
				banderaKilometros = 1;
				banderaForzados = 0;
				banderaCalculos = 0;
				break;

			case 2 ://funciones y banderas opcion 2
				//funcion aerolineas
				precioAerolineas = opcion2Aerolineas();
				//funcion latam
				precioLatam = opcion2Latam();
				banderaPrecios = 1;
				banderaForzados = 0;
				banderaCalculos = 0;
				break;

			case 3 ://funcion opcion 3
				if((banderaKilometros == 1 && banderaPrecios == 1) || banderaForzados == 1)
				{
					//calculos de todos los costos:
					//AEROLINEAS
					precioDebAerolineas = descuento10(precioAerolineas);//a) Tarjeta de débito (descuento 10%)
					precioCredAerolineas = interes25(precioAerolineas);//b) Tarjeta de crédito (interés 25%)
					precioBitAerolineas = bitcoinconv(precioAerolineas);//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
					precioKmAerolineas = costoKm(precioAerolineas, kilometros);//d) Mostrar precio por km (precio unitario)

					//LATAM
					precioDebLatam = descuento10(precioLatam);
					precioCredLatam = interes25(precioLatam);
					precioBitLatam = bitcoinconv(precioLatam);
					precioKmLatam = costoKm(precioLatam, kilometros);
					diferencia = diferencia2numeros(precioAerolineas, precioLatam);
					banderaCalculos = 1;
					printf("================================\n");
					printf("Costos calculados correctamente.\n");
					printf("================================\n");
					system("pause");
				}
				else
				{
					mensajesErrorOpcion3(banderaKilometros);//funcion con los mensajes de error de la opcion 3
				}
				break;

			case 4 ://funcion opcion 4
				opcion4(banderaCalculos, kilometros, precioAerolineas, precioDebAerolineas, precioCredAerolineas, precioBitAerolineas,
				precioKmAerolineas, precioLatam, precioDebLatam, precioCredLatam, precioBitLatam, precioKmLatam, diferencia);
				break;

			case 5 ://funcion opcion 5
				kilometros = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;
				banderaForzados = 1;
				banderaKilometros = 0;
				banderaPrecios = 0;
				printf("=============================\n");
				printf("Datos forzados correctamente.\n");
				printf("=============================\n");
				system("pause");
				break;

			case 6 ://funcion opcion 6
				mensajeOpcion6();
				break;

			default ://funcion case default
				mensajeDefault();
				break;
		}
	}while(opcion != 6);
	return EXIT_SUCCESS;
}
