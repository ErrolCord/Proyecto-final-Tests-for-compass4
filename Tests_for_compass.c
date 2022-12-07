//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: Test_for_compass source file

#include "Tests_for_compass.h"
#include <stdio.h>


//Revisión de interupción----------------------------------------------------------------
void _1_1test_interrupt(uint8_t interrupt){
	interrupt = compass4_get_interrupt ( 0 );
	if(interrupt != 0){
		printf("Interruption\n");
	}
}
//-----------------------------------------------------------------------------------  
