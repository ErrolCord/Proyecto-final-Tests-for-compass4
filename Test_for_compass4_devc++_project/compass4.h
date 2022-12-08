//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: compass4 header file

//Inclusi�n de Bibliotecas
#include <stdio.h>                                                              //Inclusi�n de biblioteca de instrucciones del lenguaje C 
#ifndef COMPASS4_H_INCLUDED                                                    //Directiva para la comprobaci�n de definici�n de archivo para el compilador             
#define COMPASS4_H_INCLUDED													   //Directiva para definirle el archivo al compilador y que este no llame dos veces al mismo archivo             
                
//#include <Arduino.h>                                                         //Inclusi�n de bilbiotecas de Arduino 

typedef char uint8_t;												           //Type definition de uint8_t como inicializador de dato char para simular representaci�n de la biblioteca original
typedef int compass4_t;												           //Type definition de compass4 como inicializador de dato int para simular representaci�n de la biblioteca original
typedef float int32_t;
typedef int uint16_t;

//************************************
//Inicializadci�n de estructuras type definition
typedef struct flux_{                                                          //Inicializaci�n de estructura de datos llamada flux
	int32_t x;                                                                 //Inicializaci�n de variable entera x para la estructura flux 	
	int32_t y;                                                                 //Inicializaci�n de variable entera y para la estructura flux
	int32_t z;                                                                 //Inicializaci�n de variable entera z para la estructura flux
}flux_;                                                                        //Definici�n de nombre flux_
struct flux_ flux;															   //Definici�n de nombre flux para la estructura

//************************************
typedef struct raw{                                                            //Inicializaci�n de estructura de datos llamada raw_data
	int32_t x;                                                                 //Inicializaci�n de variable entera x para la estructura raw_data 
    int32_t y;                                                                 //Inicializaci�n de variable entera y para la estructura raw_data
    int32_t z;                                                                 //Inicializaci�n de variable entera z para la estructura raw_data
}raw;                                                                          //Definici�n de nombre raw
struct raw raw_data;														   //Definici�n de nombre raw_data para la estructura

//************************************
/*typedef struct{ //testeo
	char pru;	
} var;*/

//************************************
typedef struct ra_{                                                            //Inicializaci�n de estructura de datos llamada ra
	int32_t x;                                                                 //Inicializaci�n de variable entera x para la estructura ra
	int32_t y;                                                                 //Inicializaci�n de variable entera y para la estructura ra
	int32_t z;                                                                 //Inicializaci�n de variable entera z para la estructura	ra
}ra_;														                   //Definici�n de nombre ra_ para la estructura
struct ra_ ra;														           //Definici�n de nombre ra para la estructura

//----------------------------------------------------------------------------
//Defiinici�n e inicializaci�n de funciones y m�todos

void application_task ( void );                                                 //M�todo para muestra de de datos de coordenadas

uint8_t compass4_get_magnetic_flux(compass4_t ctx, compass4_t flux__);          //Funci�n con dato de retorno de tipo char(uint8_t) de obtenci�n de datos de flujo

uint8_t compass4_get_axis (compass4_t ctx, compass4_t axis);  				    //Funci�n con dato de retorno de tipo char(uint8_t) de obtenci�n de datos de ejes

uint8_t drdy_wait ( uint8_t drdy_timeout );                                     //Funci�n con dato de retorno de tipo char(uint8_t) timeout de data ready

void compass4_generic_read (compass4_t ctx, uint8_t reg, uint8_t data_buf);     //M�todo para simular la obtenci�n de datos desde la interfaz del sensor

uint8_t compass4_get_interrupt (uint8_t  err );                                 //Funci�n con dato de retorno de tipo char(uint8_t) para la simulaci�n de intrrupci�n



#endif                                                                          //Directiva de cierre de la definici�n de archivo para el compilador
