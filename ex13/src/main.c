#include <stdio.h>

int main(int argc, char **argv){
	int firstNumber = 0;
	int secondNumber = 0;
	char letter = '#';

	printf("First Number:");
	scanf("%d", &firstNumber);

	do{
		printf("Letter:");
		scanf("%c", &letter);
	}
	while( letter == '\n' || letter < 'A' || letter > 'Z');

	printf("Second Number:");
	scanf("%d", &secondNumber);

	printf("%d %c %d\n", firstNumber, letter, secondNumber);



	return 0;
}
