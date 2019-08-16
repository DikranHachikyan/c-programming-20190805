#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int firstNumber = 0;
	int secondNumber = 0;
	char letter = '#';

	printf("First Number:");
	scanf("%d", &firstNumber);

	printf("Action (+ add,- subtract,* multiply,/ divide,q-quit):");
	do{
		scanf("%c", &letter);
	}
	while( letter == '\n' || !strchr("+-*/q",letter));

	printf("Second Number:");
	scanf("%d", &secondNumber);

	printf("%d %c %d\n", firstNumber, letter, secondNumber);



	return 0;
}
