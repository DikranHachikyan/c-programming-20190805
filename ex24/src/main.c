#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"

int value = 0; /* глобална променлива */

int main(int argc, char **argv){
	float firstNumber = 10;
	float secondNumber = 12;

	float res = sumNumbers(firstNumber, secondNumber);


	printf("%f + %f = %f\n", firstNumber, secondNumber, res);

	return 0;
}
