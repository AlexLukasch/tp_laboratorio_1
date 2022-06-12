
#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flyCode[51];
	int typePassenger;
	int statusFlight;
	int isEmpty;

}ePassenger;

int menu(char opciones[]);

/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all position of the array
* \param list ePassenger array of passengers
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*/
int initPassengers(ePassenger list[], int len);

/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list ePassenger
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without free space] - (0) if Ok
* */
int addPassenger(ePassenger list[], int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[]);


int loadPassengers(ePassenger list[], int len);

/** \brief da de alta a un pasajero, cambiando su isEmpty a FALSE
* @param Passenger
* @param tam
* @return
* */
int altaPasajeros(ePassenger list[], int len);


int buscarEspacioLibre(ePassenger lista[], int tam);


int hardcodePassengers(ePassenger list[]);


int listPassengers(ePassenger list[], int len);
int listPassenger(ePassenger list);
#endif /* ARRAYPASSENGER_H_ */
