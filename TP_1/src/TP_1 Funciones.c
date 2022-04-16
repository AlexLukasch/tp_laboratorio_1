/*
 * funcionesTP1.c
 *
 *  Created on: 4 abr. 2022
 *      Author: pc
 */
#include <stdio.h>
#include <stdlib.h>

float descuento10(float a)
{
	float descuento;
	descuento = a-(a*0.10);
	return descuento;
}

float interes25(float a)
{
	float interes;
	interes = a+(a*0.25);
	return interes;
}

double bitcoinconv(float a)
{
	double conversion;
	conversion = a / 4606954.55;
	return conversion;
}

float costoKm(float a, int b)
{
	float resultado;
	resultado = a/b;
	return resultado;
}

float diferencia2numeros(float a, float b)
{
	float resultado;
	if(a > b)
	{
		resultado = a - b;
	}
	else
	{
		resultado = b - a;
	}
	return resultado;
}


int opcion1(void)
{
	int a;
	printf("Ingresar kilometros:\n");
	scanf("%d", &a);
	while(a < 1)
	{
		fflush(stdin);
		printf("Error, ingrese una cantidad de kilometros valida\n");
		scanf("%d", &a);
	}
	printf("===================================\n");
	printf("Kilometros guardados correctamente.\n");
	printf("===================================\n");
	system("pause");
	return a;
}

float opcion2Aerolineas(void)
{
	float a;
	printf("Ingrese precio de vuelo Aerolineas: \n");
	scanf("%f", &a);
	while(a < 1)
	{
		fflush(stdin);
		printf("Error, ingrese un precio de vuelo valido: \n");
		scanf("%f", &a);
	}
	return a;
}

float opcion2Latam(void)
{
	float a;
	printf("Ingrese precio de vuelo Latam: \n");
	scanf("%f", &a);
	while(a < 1)
	{
		fflush(stdin);
		printf("Error, ingrese un precio de vuelo valido: \n");
		scanf("%f", &a);
	}
	printf("================================\n");
	printf("Precios guardados correctamente.\n");
	printf("================================\n");
	system("pause");
	return a;
}

void mensajesErrorOpcion3(int a)
{
	if(a == 0)
	{
	printf("=================================\n");
	printf("Error, no se cargaron kilometros.\n");
	printf("=================================\n\n");
	system("pause");
	}
	else
	{
	printf("===========================================\n");
	printf("Error, no se cargaron los precios de vuelo.\n");
	printf("===========================================\n\n");
	system("pause");
	}
}

void opcion4(int a, int b, float c, float d, float e, double f, float g, float h, float i, float j, double k, float l, float m)
{
	if(a == 1)
	{
		printf("=====================================\n");
		printf("KMs Ingresados: %d\n", b);
		printf("\n"
			   "Precio Aerol%cneas: $%.2f\n", 161, c);
		printf("a) Precio con tarjeta de debito: $%.2f\n", d);
		printf("b) Precio con tarjeta de credito: $%.2f\n", e);
		printf("c) Precio pagando con bitcoin: %.20lf BTC\n", f);
		printf("d) Mostrar precio unitario: $%.2f\n\n", g);

		printf("Precio Latam: $%.2f\n", h);
		printf("a) Precio con tarjeta de debito: $%.2f\n", i);
		printf("b) Precio con tarjeta de credito:$%.2f\n", j);
		printf("c) Precio pagando con bitcoin: %.20lf BTC\n", k);
		printf("d) Mostrar precio unitario: $%.2f\n\n", l);
		printf("La diferencia de precio es: $%.2f\n", m);
		printf("=====================================\n");
		system("pause");
	}
	else
	{
		printf("==========================================================================\n");
		printf("Error, no hay resultados para calcular o no se ingresaron todos los datos.\n");
		printf("==========================================================================\n\n");
		system("pause");
	}
}
//temporalmente cambio de return int a void
int mostrarMenu(int a, float b, float c)
{
	int opcion;
	printf("===============================================================\n"
			"                          ****MENU****                         \n"
			"===============================================================\n"
			"1. Ingresar Kilometros: (km = %d)\n\n"
			"2. Ingresar Precio Vuelos: (Aerolineas = %.2f, Latam = %.2f )\n"
			"-Precio vuelo Aerolineas: \n"
			"-Precio vuelo Latam: \n\n"
			"3. Calcular todos los costos: \n"
			"a) Tarjeta de dbito (descuento 10%c) \n"
			"b) Tarjeta de credito (interes 25%c) \n"
			"c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n"
			"d) Mostrar precio por km (precio unitario) \n"
			"e) Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n\n"
			"4. Informar Reultados\n"
			"Latam:\n"
			"a) Precio con tarjeta de debito: r\n"
			"b) Precio con tarjeta de credito: r\n"
			"c) Precio pagando con bitcoin : r\n"
			"d) Precio unitario: r\n"
			"Aerolineas:\n"
			"a) Precio con tarjeta de debito: r\n"
			"b) Precio con tarjeta de credito: r\n"
			"c) Precio pagando con bitcoin : r\n"
			"d) Precio unitario: r\n"
			"La diferencia de precio es : r \n\n"
			"5. Carga forzada de datos \n\n"
			"6. Salir\n", a, b, c, 37, 37);
	scanf("%d", &opcion);
	return opcion;
}

void mensajeOpcion6(void)
{
	printf("===============================\n");
	printf("Cerrando programa, Hasta luego!\n");
	printf("===============================\n");
	system("pause");
}

void mensajeDefault()
{
	printf("=====================================\n");
	printf("Error, ingrese una opcion del 1 al 6.\n");
	printf("=====================================\n\n");
	system("pause");
}
