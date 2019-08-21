#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"


int main(int argc, char **argv){
	int number = 5;

	long int fct = fact(number);

	printf("%d!=%ld\n", number, fct);

	return 0;
}
