#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
	int m[5];
	int i;

	/*srand(time(0));*/

	for( i = 0; i < 5; i++){
		m[i]= rand() % 100;
	}

	printf("\nOutput:\n");

	for( i = 0 ; i < 5 ; i++){
		printf("m[%d]=%d\t", i, m[i]);
	}
	printf("\n");
	return 0;
}
