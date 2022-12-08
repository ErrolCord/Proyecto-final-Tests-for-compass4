#include <stdio.h>                                                              //Inclusión de biblioteca de instrucciones del lenguaje C                                           
#include"compass4.h"                                                            //Inclusión de la biblioteca modificada del sensor compass4
#include"Tests_for_compass.h"                                                   //Inclusión de biblioteca de tests 
int ex;                                                  
int select;																		//Inicialización de variable de selección para el menú de test

int main (){ 																    //Inicialización de función principal
	while(ex != 10){

		printf("Elija el test para realizar \n");								//Impresión de indicación
		scanf("%d", &select); 												    //Toma de la selección del usuario
		switch(select){ 														//Inicialización de estructura switch case para selección de test
			case 1:    															//Apertura caso 1
				_1_2test_get_coordinates(0);
				break; 															//Salida de caso
			case 2: 															//Apertura de caso 2
				_1_1test_interrupt(0); 
				break; 															//Salida de caso
			case 3: 															//Apertura de caso 2
				application_task ();
				break; 															//Salida de caso
			default: 															//Apertura de caso por defecto en caso de dato no valido
				printf("Seleccion no valida \n"); 									//Impresión de indicación
			break; 																//Salida de caso
		}
		printf("¿Desea salir? Si: 10, No: 15 \n");								//Impresión de indicación
		scanf("%d", &ex);                                                       //Toma de la selección del usuario	
	
	}
	return 0;
}        
