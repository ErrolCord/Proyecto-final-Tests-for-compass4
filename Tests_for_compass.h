//Ingenieria Electronica
//Proyecto Final: Tests for compass
//Curso: Aplicaciones de microcontroladores
//Profesor: Arnoldo Alcides Ramires
//Estudiantes: Andres Molina Castro, Ramses Camacho Chavarria, Errol Cordero Cordero
//Entrega: 8 de diciembre de 2022
//Archivo: Test_for_compass header file
#include<stdio.h>                                                              //Inclusión de biblioteca de instrucciones del lenguaje C 
#include"compass4.h"                                                           //Inclusión de la biblioteca modificada del sensor compass4
#ifndef TESTS_FOR_COMPASS_H_INCLUDED                                           //Directiva para la comprobación de definición de archivo para el compilador 
#define TESTS_FOR_COMPASS_H_INCLUDED                                           //Directiva para definirle el archivo al compilador y que este no llame dos veces al mismo archivo


void _1_1test_interrupt(uint8_t intrrupt);                                      //Método de test 1_1 con parámetro de tipo char(uint8_t) para la indicación de interrupción, test 1_1

uint16_t _1_2test_get_acimut(int32_t d_x, int32_t d_y, int32_t ac, uint8_t d ); //Función para la obtención del acimut, inicializando tres variables de tipo float (int32_t) y una de tipo char (uint8_t), forma parte del test 1_2

void _1_2test_get_coordinates( int32_t coordinate);                             //Método para la obtención de la dirección a la que se apunta (N, S, E ,O) test 1_2



#endif                                                                          //Directiva de cierre de la definición de archivo para el compilador 




