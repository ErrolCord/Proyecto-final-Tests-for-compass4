#include <stdio.h>                                                              //Inclusi�n de biblioteca de instrucciones del lenguaje C                                           
#include"compass4.h"                                                            //Inclusi�n de la biblioteca modificada del sensor compass4
#include"Tests_for_compass.h"                                                   //Inclusi�n de biblioteca de tests 
int ex;                                                  
int select;																		//Inicializaci�n de variable de selecci�n para el men� de test

int main (){ 																    //Inicializaci�n de funci�n principal
	while(ex != 10){

		printf("Elija el test para realizar \n");								//Impresi�n de indicaci�n
		scanf("%d", &select); 												    //Toma de la selecci�n del usuario
		switch(select){ 														//Inicializaci�n de estructura switch case para selecci�n de test
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
				printf("Seleccion no valida \n"); 									//Impresi�n de indicaci�n
			break; 																//Salida de caso
		}
		printf("�Desea salir? Si: 10, No: 15 \n");								//Impresi�n de indicaci�n
		scanf("%d", &ex);                                                       //Toma de la selecci�n del usuario	
	
	}
	return 0;
}        
