//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: Test_for_compass source file

#include "Tests_for_compass.h"                                                                 //Inclusi�n de biblioteca de tests
#include <stdio.h>                                                                             //Inclusi�n de biblioteca de instrucciones del lenguaje C 


//Revisi�n de interupci�n------------------------------------------------------------
void _1_1test_interrupt(uint8_t interrupt){                                                    //M�todo de test 1_1 con par�metro de tipo char(uint8_t) para la indicaci�n deinterrupci�n
	interrupt = compass4_get_interrupt ( 0 );                                                  //Se asigna el dato retornado en la funci�n compass4_get_interrupt en la variablew interrupt
	if(interrupt != 0){																		   //Estructura if cuya condici�n de entrada es que el dato asignado a la variable interrupt no sea 0
		printf("Interruption\n");                                                              //Impresi�n de texto de interrupci�n en caso de que el dato de interrupt sea 1
	}
}
//-----------------------------------------------------------------------------------  
