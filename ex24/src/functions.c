/*
 * functions.c
 *
 *  Created on: Aug 21, 2019
 *      Author: wizard
 *  Тук записваме:
 *  1. Дефиниции на функции
 *  ...
 *  Може да има и:
 *  1. макроси
 *  2. собствени типове
 *  ....
 *  но ако има подобни, то те са локални за файла
 */

/**
 * Дефиниция на функцията
 */
float sumNumbers(float first, float second){
	float result=0; /*локална за функцията променлива*/

	result = first + second;

	return result;
}

/**
 * Локална за сорс файла функция (използва се само тук)
 */
void foo(){

}
