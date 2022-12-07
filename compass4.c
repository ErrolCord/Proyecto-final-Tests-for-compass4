//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: compass4 source file
#include<stdio.h>
#include"compass4.h"           
//#include <Arduino.h>  

compass4_t ctx = 0; 
uint8_t reg = 0;
uint8_t data_buf = 0;
uint8_t drdy_timeout = 0;
compass4_t axis = 0;
compass4_t flux__ = 0;
//-----------------------------------------------------------------

void application_task ( void )
{
    //int;
    uint8_t err;
    
    err = compass4_get_magnetic_flux (ctx, flux__);
    if ( err != 0 )
    {
        printf (">> Measurement error\n" );
    }
    else
    {
        printf( ">> Magnetic flux data << \n" );
        printf( ">> X: %d \n", flux.x);
        printf( ">> Y: %d \n", flux.y);
        printf( ">> Z: %d \n", flux.z );
    }
    printf( "-----------------------------\n" );
    //Delay_ms( 1000 );
}

//----------------------------------------------------------------
uint8_t compass4_get_magnetic_flux(compass4_t ctx, compass4_t flux__)
{

    uint8_t err;

    err = compass4_get_axis ( ctx, axis );
	flux.x = raw_data.x;
	flux.y = raw_data.y;
	flux.z = raw_data.z;

    return err;
}


//-----------------------------------------------------------------
uint8_t compass4_get_axis (compass4_t ctx, compass4_t axis) //obteniendo ejes
{

    uint8_t err;

                                                 
    err = drdy_wait( ctx );

    compass4_generic_read ( ctx, reg, data_buf);
    raw_data.x = ra.x;
    raw_data.y = ra.y;
    raw_data.z = ra.z;
    return err;
}

//----------------------------------------------------------------------------------
uint8_t drdy_wait ( uint8_t drdy_timeout )  //función para timeout
{
     drdy_timeout = 0;

    return drdy_timeout;
}

//-------------------------------------------------------------------------------------
void compass4_generic_read (compass4_t ctx, uint8_t reg, uint8_t data_buf)  //lectura más cruda
{

    ra.x= 50;
    ra.y= 63;
    ra.z= 42;
}

//---------------------------------------------------------------------
uint8_t compass4_get_interrupt ( uint8_t err )  //valor para interrupción
{
	err = 1;
    return err;
}
