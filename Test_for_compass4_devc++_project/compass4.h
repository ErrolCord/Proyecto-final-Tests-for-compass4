//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: compass4 header file

//Inclusión de Bibliotecas
#include <stdio.h>                                                              //Inclusión de biblioteca de instrucciones del lenguaje C 
#ifndef COMPASS4_H_INCLUDED                                                    //Directiva para la comprobación de definición de archivo para el compilador             
#define COMPASS4_H_INCLUDED													   //Directiva para definirle el archivo al compilador y que este no llame dos veces al mismo archivo             
                
//#include <Arduino.h>                                                         //Inclusión de bilbiotecas de Arduino 

typedef char uint8_t;												           //Type definition de uint8_t como inicializador de dato char para simular representación de la biblioteca original
typedef int compass4_t;												           //Type definition de compass4 como inicializador de dato int para simular representación de la biblioteca original
typedef float int32_t;
typedef int uint16_t;

//************************************
//Inicializadción de estructuras type definition
typedef struct flux_{                                                          //Inicialización de estructura de datos llamada flux
	int32_t x;                                                                 //Inicialización de variable entera x para la estructura flux 	
	int32_t y;                                                                 //Inicialización de variable entera y para la estructura flux
	int32_t z;                                                                 //Inicialización de variable entera z para la estructura flux
}flux_;                                                                        //Definición de nombre flux_
struct flux_ flux;															   //Definición de nombre flux para la estructura

//************************************
typedef struct raw{                                                            //Inicialización de estructura de datos llamada raw_data
	int32_t x;                                                                 //Inicialización de variable entera x para la estructura raw_data 
    int32_t y;                                                                 //Inicialización de variable entera y para la estructura raw_data
    int32_t z;                                                                 //Inicialización de variable entera z para la estructura raw_data
}raw;                                                                          //Definición de nombre raw
struct raw raw_data;														   //Definición de nombre raw_data para la estructura

//************************************
/*typedef struct{ //testeo
	char pru;	
} var;*/

//************************************
typedef struct ra_{                                                            //Inicialización de estructura de datos llamada ra
	int32_t x;                                                                 //Inicialización de variable entera x para la estructura ra
	int32_t y;                                                                 //Inicialización de variable entera y para la estructura ra
	int32_t z;                                                                 //Inicialización de variable entera z para la estructura	ra
}ra_;														                   //Definición de nombre ra_ para la estructura
struct ra_ ra;														           //Definición de nombre ra para la estructura

//----------------------------------------------------------------------------
//Defiinición e inicialización de funciones y métodos

void application_task ( void );                                                 //Método para muestra de de datos de coordenadas

uint8_t compass4_get_magnetic_flux(compass4_t ctx, compass4_t flux__);          //Función con dato de retorno de tipo char(uint8_t) de obtención de datos de flujo

uint8_t compass4_get_axis (compass4_t ctx, compass4_t axis);  				    //Función con dato de retorno de tipo char(uint8_t) de obtención de datos de ejes

uint8_t drdy_wait ( uint8_t drdy_timeout );                                     //Función con dato de retorno de tipo char(uint8_t) timeout de data ready

void compass4_generic_read (compass4_t ctx, uint8_t reg, uint8_t data_buf);     //Método para simular la obtención de datos desde la interfaz del sensor

uint8_t compass4_get_interrupt (uint8_t  err );                                 //Función con dato de retorno de tipo char(uint8_t) para la simulación de intrrupción



#endif                                                                          //Directiva de cierre de la definición de archivo para el compilador
