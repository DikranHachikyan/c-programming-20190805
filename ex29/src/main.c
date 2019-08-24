#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv){

	int m[] = {12,34,56,78,90};
	int i;

	for( i = 0 ; i < 5 ; i++){
		printf("[%d]=%d addr:%p\n", i, *(m + i), (m + i));
	}
	return 0;
}
