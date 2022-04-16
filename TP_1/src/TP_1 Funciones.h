/*
 * funcionesTP1.h
 *
 *  Created on: 4 abr. 2022
 *      Author: pc
 */

#ifndef FUNCIONESTP1_H_
#define FUNCIONESTP1_H_

/// esta funcion calcula el 10% de descuento a un numero
/// @param a es el numero al que se le saca el 10%
/// @return devuelve el numero con el 10% de descuento ya realizado
float descuento10(float a);

/// esta funcion calcula el 25% de interes de un numero
/// @param a es el numero al que se le saca el 25%
/// @return devuelve el numero con el 25% de interes ya realizado
float interes25(float a);

/// esta funcion convierte un precio en pesos a uno en bitcoins
/// @param a es la suma en pesos
/// @return devuelve el equivalente en bitcoins (1 BTC = 4606954.55 pesos)
double bitcoinconv(float a);

/// esta funcion determina el costo por km sobre el precio base
/// @param a es el precio base
/// @param b es la cantidad de kilometros
/// @return devuelve el costo por kilometro
float costoKm(float a, int b);

/// esta funcion realiza la diferencia entre dos numeros
/// @param a es el primero
/// @param b es el segundo
/// @return devuelve la diferencia entre el primer y segundo numero
float diferencia2numeros(float a, float b);

/// esta funcion sirve para el case 1
/// @return devuelve los kilometros que ingreso el usuario
int opcion1(void);

/// esta funcion sirve para cargar el precio aerolineas en el case 2
/// @return devuelve el precio que ingreso el usuario
float opcion2Aerolineas(void);

/// esta funcion sirve para cargar el precio latam en el case 2
/// @return devuelve el precio que ingreso el usuario
float opcion2Latam(void);

/// esta funcion muestra o no los mensajes de error en el case 3
/// @param a es la bandera de kilometros
void mensajesErrorOpcion3(int a);

/// esta funcion muestra los resultados en caso de que hayan sido calculados, de lo contrario muestra error
/// @param a es la bandera de calculos(que se activa en el case 3)
/// @param b es la cantidad de kilometros
/// @param c es el precio base de aerolineas
/// @param d es el precio en debito de aerolineas
/// @param e es el precio en credito de aerolineas
/// @param f es el precio en bitcoin de aerolineas
/// @param g es el precio por km de aerolineas
/// @param h es el precio base de latam
/// @param i es el precio en debito de latam
/// @param j es el precio en credito de latam
/// @param k es el precio en bitcoin de latam
/// @param l es el precio por km de latam
/// @param m es la diferencia entre el precio base de aerolineas y latam
void opcion4(int a, int b, float c, float d, float e, double f, float g, float h, float i, float j, double k, float l, float m);

/// esta funcion muestra el menu y permite elegir una opcion
/// @param a es la cantidad de kilometros
/// @param b es el preco base de aerolineas
/// @param c es el precio base de latam
/// @return
int mostrarMenu(int a, float b, float c);

/// esta funcion muestra el mensaje de la opcion 6
void mensajeOpcion6(void);

/// esta funcion muestra el mensaje para default
void mensajeDefault(void);
#endif
/* FUNCIONESTP1_H_ */
