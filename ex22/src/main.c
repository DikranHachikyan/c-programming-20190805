#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int value = 0; /* глобална променлива */

float sumNumbers(float first, float second){
	float result; /*локална за функцията променлива*/

	result = first + second;

	return result;
}

#define SUMA(A,B) ((A) + (B))
int main(int argc, char **argv){
	float firstNumber = 10;
	float secondNumber = 12;

	float res = sumNumbers(firstNumber, secondNumber);
	int r = SUMA(5,6);

	printf("%f + %f = %f\n", firstNumber, secondNumber, res);

	return 0;
}
