#include <stdio.h>

int main(int argc, char **argv){
	char firstLetter = '#';
	int counter  = 0;
	float price = 0;


	printf("Counter:");
	scanf("%d", &counter);

	printf("First Letter of your name:");
	scanf("%c", &firstLetter);

	printf("Price:");
	scanf("%f", &price);

	printf("Counter = %d, First Letter = %c, Price = %f\n", counter, firstLetter, price);
	printf("%d\t%c\t%f\n", counter, firstLetter, price);


	return 0;
}
