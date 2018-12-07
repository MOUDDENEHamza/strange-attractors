#ifndef _INPUTSYSTEMS_H_
#define _INPUTSYSTEMS_H_

#include "struct.h"

/**************************************LORENZ SYSTEM**************************************/

//input initial coordinates of lorenz dynamic system.
void lorenz_coordinates(double position[]);

//input constants of lorenz dynamic system.
void lorenz_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/***************************************EULER SYSTEM**************************************/

//input initial coordinates of euler dynamic system.
void euler_coordinates(double position[]);

//input constants of euler dynamic system.
void euler_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************AIZAWA SYSTEM************************************/

//input initial coordinates of aizawa dynamic system.
void aizawa_coordinates(double position[]);

//input constants of aizawa dynamic system.
void aizawa_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************ANISHCHENKO SYSTEM*******************************/

//input initial coordinates of anishchenko system.
void anishchenko_coordinates(double position[]);

//input constants of anishchenko dynamic system.
void anishchenko_constants(double parameter[], char by_default[]);


/*****************************************************************************************/
/****************************************HOOVER SYSTEM************************************/

//input initial coordinates of hoover system.
void hoover_coordinates(double position[]);

//input constants of hoover dynamic system.
void hoover_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************ROSSLER SYSTEM************************************/

//input initial coordinates of rossler system.
void rossler_coordinates(double position[]);

//input constants of rossler dynamic system.
void rossler_constants(double parameter[], char by_default[]);

/*****************************************************************************************/
/****************************************COULLET SYSTEM************************************/

//input initial coordinates of rossler system.
void coullet_coordinates(double position[]);

//input constants of rossler dynamic system.
void coullet_constants(double parameter[], char by_default[]);

/*****************************************************************************************/

#endif

