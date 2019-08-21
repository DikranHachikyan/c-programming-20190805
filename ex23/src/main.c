#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int value = 0; /* глобална променлива */

/**
 * Декларация на функцията
 * (прототип на функцията)
 */
float sumNumbers(float, float);

int main(int argc, char **argv){
	float firstNumber = 10;
	float secondNumber = 12;

	float res = sumNumbers(firstNumber, secondNumber);


	printf("%f + %f = %f\n", firstNumber, secondNumber, res);

	return 0;
}

/**
 * Дефиниция на функцията
 */
float sumNumbers(float first, float second){
	float result; /*локална за функцията променлива*/

	result = first + second;

	return result;
}
