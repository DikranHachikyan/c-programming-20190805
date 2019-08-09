#include <stdio.h>

int main(int argc, char **argv){
	float firstNumber = 0;
	float secondNumber = 0;
	float result = 0;

	printf("First Number=");
	scanf("%f", &firstNumber);

	printf("Second Number=");
	scanf("%f", &secondNumber);

	if( secondNumber != 0 ){
		result = firstNumber / secondNumber;
		printf("%f / %f = %f\n", firstNumber, secondNumber, result);
	}

	return 0;
}
