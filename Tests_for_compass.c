//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: Test_for_compass source file

#include "Tests_for_compass.h"                                                                 //Inclusión de biblioteca de tests
#include <stdio.h>                                                                             //Inclusión de biblioteca de instrucciones del lenguaje C 


//Revisión de interupción------------------------------------------------------------
void _1_1test_interrupt(uint8_t interrupt){                                                    //Método de test 1_1 con parámetro de tipo char(uint8_t) para la indicación deinterrupción
	interrupt = compass4_get_interrupt ( 0 );                                                  //Se asigna el dato retornado en la función compass4_get_interrupt en la variablew interrupt
	if(interrupt != 0){																		   //Estructura if cuya condición de entrada es que el dato asignado a la variable interrupt no sea 0
		printf("Interruption\n");                                                              //Impresión de texto de interrupción en caso de que el dato de interrupt sea 1
	}
}
//-----------------------------------------------------------------------------------  
