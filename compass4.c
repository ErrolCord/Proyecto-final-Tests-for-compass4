//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: compass4 source file

//Inclusión de Bibliotecas
#include<stdio.h>                                                              //Inclusión de biblioteca de instrucciones del lenguaje C 
#include"compass4.h"                                                           //Inclusión de la biblioteca modificada del sensor compass4
//#include <Arduino.h>                                                         //Inclusión de bilbiotecas de Arduino 

//Inicialización de variables para asignación de parámetros en funciones simulando registros y direcciones de dependencias       
compass4_t ctx = 0;                                                            //Inicialización de variable en 0 de tipo entera (compass4) nombrada ctx  
uint8_t reg = 0;                                                               //Inicialización de variable en 0 de tipo char (uint8_t) nombrada reg
uint8_t data_buf = 0;                                                          //Inicialización de variable en 0 de tipo char (uint8_t) nombrada data_buf
uint8_t drdy_timeout = 0;                                                      //Inicialización de variable en 0 de tipo char (uint8_t)nombrada drdy_timeout
compass4_t axis = 0;                                                           //Inicialización de variable en 0 de tipo entera (compass4) nombrada axis
compass4_t flux__ = 0;                                                         //Inicialización de variable en 0 de tipo entera (compass4) nombrada flux__


//Funciones, métodos y lógica interna
void application_task ( void )                                                 //Método para muestra de de datos de coordenadas                                                 
{

    uint8_t err;                                                               //Inicialización de variable de tipo char nombrada err para interrupción y timeout
    
    err = compass4_get_magnetic_flux (ctx, flux__);                            //Se carga el valor retornado de la función compass4_get_magnetic_flux() en la variable err y de paso se ejecuta el código interno de esta función
    if ( err != 0 )                                                            //Estructura if cuya condición de entrada es que la variable err no tenga almacenado un 0
    {
        printf (">> Measurement error\n" );                                    //Impresión de texto en caso de cumplirse la condición de la estructura if
    }
    else                                                                       //Estructura else para la ejecución de código en caso de no cumplirse la condición de la estructura if anterior
    {
        printf( ">> Magnetic flux data << \n" );                               //Impresión de título precediendo la impresión de los datos de x, y , z
        printf( ">> X: %d \n", flux.x);                                        //Impresión de dato del eje x
        printf( ">> Y: %d \n", flux.y);                                        //Impresión de dato del eje y
        printf( ">> Z: %d \n", flux.z);                                        //Impresión de dato del eje z
    }
    printf( "-----------------------------\n" );                               //Impresión de texto separador de datos

}

//----------------------------------------------------------------
uint8_t compass4_get_magnetic_flux(compass4_t ctx, compass4_t flux__)          //Función con dato de retorno de tipo char(uint8_t) de obtención de datos de flujo
{

    uint8_t err;                                                               //Inicialización de variable de tipo char nombrada err para interrupción y timeout

    err = compass4_get_axis ( ctx, axis );                                     //Se carga el valor retornado de la función compass4_get_axis() en la variable err y de paso se ejecuta el código interno de esta fucnión
	flux.x = raw_data.x;                                                       //Se carga en valor del dato x de la estructura raw_data en el valor x de la estructura flux
	flux.y = raw_data.y;                                                       //Se carga en valor del dato y de la estructura raw_data en el valor y de la estructura flux
	flux.z = raw_data.z;                                                       //Se carga en valor del dato z de la estructura raw_data en el valor z de la estructura flux

    return err;                                                                //Se returna el dato asignado a err 
}


//-----------------------------------------------------------------
uint8_t compass4_get_axis (compass4_t ctx, compass4_t axis) 				   //Función con dato de retorno de tipo char(uint8_t) de obtención de datos de ejes
{

    uint8_t err;                                                               //Inicialización de variable de tipo char nombrada err para interrupción y timeout

                                                 
    err = drdy_wait( ctx );													   //Se carga el valor retornado de la función drdy_wait( ) en la variable err y de paso se ejecuta el código interno de esta fucnión

    compass4_generic_read ( ctx, reg, data_buf);                               //Se hace un llamado a la función compass4_generic_read para la ejecución de su código interno el cuál entrega los datos de los ejes
    raw_data.x = ra.x;														   //Se carga en valor del dato x de la estructura ra en el valor x de la estructura raw_data
    raw_data.y = ra.y;														   //Se carga en valor del dato y de la estructura ra en el valor y de la estructura raw_data
    raw_data.z = ra.z;														   //Se carga en valor del dato z de la estructura ra en el valor z de la estructura raw_data
    return err;														           //Se retorna el dato asignado a la variable err
}

//------------------------------------------------------------------
uint8_t drdy_wait ( uint8_t drdy_timeout ) 				                       //Función con dato de retorno de tipo char(uint8_t) timeout de data ready
{
     drdy_timeout = 0;                                                         //Se carga el dato en la variable de tipo char(uint8_t) drdy_timeout 0 para no interrupción y 1 para error por timeout, simulando un tiempo de espera agotado para la señal de dato listo

    return drdy_timeout;                                                       //Retorna el dato asignado a la variable drdy_timeout
}

//------------------------------------------------------------------
void compass4_generic_read (compass4_t ctx, uint8_t reg, uint8_t data_buf)     //Método para simular la obtención de datos desde la interfaz del sensor 
{

    ra.x= 50;														           //Se carga un valor en el dato x la estructura ra
    ra.y= 63;														           //Se carga un valor en el dato x la estructura ra
    ra.z= 42;														           //Se carga un valor en el dato x la estructura ra
}

//-------------------------------------------------------------------
uint8_t compass4_get_interrupt ( uint8_t err )								   //Función con dato de retorno de tipo char(uint8_t) para la simulación de intrrupción 
{
	err = 1;																   //Asignación de dato a la variable err siendo 0 para la no interupción y 1 para la existencia de esta
    return err;																   //retorno del dato asignado a la variable err
}
