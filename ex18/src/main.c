#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
	int m[5];
	int i;
	int j;
	int tmp;

	srand(time(0));
	for( i = 0; i < 5; i++){
		m[i]= rand() % 100;
		printf("m[%d]=%d\t", i, m[i]);
	}
	/* sort array*/
	for( i = 0; i < 5-1; i++){
		for(j=i+1; j < 5; j++ ){
			if( m[i] > m[j]){
				tmp  = m[i];
				m[i] = m[j];
				m[j] = tmp;
			}
		}
	}
	/* end sort array*/
	printf("\nOutput:\n");

	for( i = 0 ; i < 5 ; i++){
		printf("m[%d]=%d\t", i, m[i]);
	}
	printf("\n");
	return 0;
}
