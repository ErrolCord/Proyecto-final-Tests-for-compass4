//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: Test_for_compass source file

#include "Tests_for_compass.h" 
#include "compass4.h"                                                                          //Inclusión de biblioteca de tests
#include <stdio.h>                                                                             //Inclusión de biblioteca de instrucciones del lenguaje C 


//Revisión de interupción------------------------------------------------------------
void _1_1test_interrupt(uint8_t interrupt){                                                    //Método de test 1_1 con parámetro de tipo char(uint8_t) para la indicación deinterrupción
	interrupt = drdy_wait ( 0 ) ;                                                              //Se asigna el dato retornado en la función compass4_get_interrupt en la variablew interrupt
	if(interrupt != 0){																		   //Estructura if cuya condición de entrada es que el dato asignado a la variable interrupt no sea 0
		printf("Interruption\n");                                                              //Impresión de texto de interrupción en caso de que el dato de interrupt sea 1
	}
}
//-----------------------------------------------------------------------------------  

uint16_t _1_2test_get_acimut(int32_t d_x, int32_t d_y, int32_t ac, uint8_t d ){                //Función para la obtención del acimut, inicializando tres variables de tipo float (int32_t) y una de tipo char (uint8_t), forma parte del test 1_2
	d = compass4_get_magnetic_flux(0,0);                                                       //Se carga el dato retornado en la función compass4_get_magnetic_flux() en la variable d, con el fin de generar los datos x, y y z y transferirlos por medio de estructuras
	d_x = flux.x;                                                                              //Se asigna el valor de lectura del eje x a la variable d_x
	d_y = flux.y;                                                                              //Se asigna el valor de lectura del eje y a la variable d_y
	if ((d_x == 20.0 ) && (d_y == 0 ) ){                                                       //Estructura if cuya condición de entrada es que d_x sea 20.0 y d_y sea 0 (simulando los valores para obterenr el acimut)
		ac = 0;																				   //Se asigna el valor 0 al acimut, simulando la operación de arcotangente (y/x)
	}
	else if ((d_x == 1.0 ) && (d_y == 90.0 ) ) {                                               //Estructura else if cuya condición de entrada es que d_x sea 1.0 y d_y sea 90.0 (simulando los valores para obterenr el acimut)
		ac = 90.0;																			   //Se asigna el valor 90 al acimut, simulando la operación de arcotangente (y/x)
	}
	else if ((d_x == 1.0 ) && (d_y == 20.0 ) ) {                                               //Estructura else if cuya condición de entrada es que d_x sea 1.0 y d_y sea 20.0 (simulando los valores para obterenr el acimut)
		ac = 180.0;																			   //Se asigna el valor 180 al acimut, simulando la operación de arcotangente (y/x)
	}
	else if ((d_x ==90.0 ) && (d_y == 1.0 ) ) {                                                //Estructura else if cuya condición de entrada es que d_x sea 90.0  y d_y sea 1.0 (simulando los valores para obterenr el acimut)
		ac = 270.0;																			   //Se asigna el valor 180 al acimut, simulando la operación de arcotangente (y/x)
	}
	return ac;
	
}
void _1_2test_get_coordinates( int32_t coordinate){                                             //Método para la obtención de la dirección a la que se apunta (N, S, E ,O) test 1_2
	coordinate = _1_2test_get_acimut(0,0,0,0);                                                  //Se carga el dato retornado en la función  _1_2test_get_acimut() en la variable coordinate, con el fin de generar de obtener un valor virtual de acimut y determinar la dirección del sensor
		if (coordinate == 0 ){                                                                  //Estructura if cuya condición de entrada es que coordinate sea 0 simulando el acimut hacia el norte
		printf ("N");                                                                           //Impresión de dirección de apuntado (Norte)
	}
	else if (coordinate == 90.0 ) {                                                             //Estructura else if cuya condición de entrada es que coordinate sea 90 simulando el acimut hacia el Este
		printf ("E");                                                                           //Impresión de dirección de apuntado (Este)
	}
	else if  (coordinate == 180.0 ) {                                                           //Estructura else if cuya condición de entrada es que coordinate sea 180 simulando el acimut hacia el Sur
		printf ("S");                                                                           //Impresión de dirección de apuntado (Sur)
	}
	else if (coordinate == 270.0 ) {                                                           //Estructura else if cuya condición de entrada es que coordinate sea 270 simulando el acimut hacia el Oeste
		printf ("W");                                                                           //Impresión de dirección de apuntado (Oeste)
	}
}
