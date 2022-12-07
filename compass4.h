//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: compass4 header file
#include <stdio.h>
#ifndef COMPASS4_H_INCLUDED             
#define COMPASS4_H_INCLUDED             
                
//#include <Arduino.h>

typedef char uint8_t;
typedef int compass4_t;

/*typedef struct nom{
	compass4_t ctx;
	uint8_t reg;
	uint8_t data_buf;
	uint8_t len;
}nom;
struct nom _;*/

typedef struct flux_{
	int x;	
	int y;
	int z;
}flux_;
struct flux_ flux;


//*******************************
typedef struct raw{
	int x;
    int y;
    int z;
}raw;
struct raw raw_data;


//************************************
typedef struct prub{ //testeo
	char pru;	
}prub;
struct prub var;

//***********************************
typedef struct ra_{  //generic_read
	int x;
	int y;
	int z;	
}ra_;
struct ra_ ra;


//----------------------------------------------------------------------------

void application_task ( void );

uint8_t compass4_get_magnetic_flux(compass4_t ctx, compass4_t flux__);//flujos con ejes

uint8_t compass4_get_axis (compass4_t ctx, compass4_t axis); //ejes

uint8_t drdy_wait ( uint8_t drdy_timeout );   //función para timeout

void compass4_generic_read (compass4_t ctx, uint8_t reg, uint8_t data_buf); //lectura de datos más cruda

uint8_t compass4_get_interrupt (uint8_t  err ); // valor para interrupción



#endif   
