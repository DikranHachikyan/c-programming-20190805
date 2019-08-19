#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MOD  26

#define SWAP(A,B)  int t = (A); \
				   (A)=(B);\
				   (B)=t

int main(int argc, char **argv){
	int m[SIZE];
	int i;
	int j;

	srand(time(0));
	for( i = 0; i < SIZE; i++){
		m[i]= rand() % MOD;
		printf("m[%d]=%d\t", i, m[i]);
	}
	/* sort array*/
	for( i = 0; i < SIZE - 1; i++){
		for(j=i+1; j < SIZE; j++ ){
			if( m[i] > m[j]){
				SWAP(m[i],m[j]);
			}
		}
	}
	/* end sort array*/
	printf("\nOutput:\n");

	for( i = 0 ; i < SIZE ; i++){
		printf("m[%d]=%d\t", i, m[i]);
	}
	printf("\n");
	return 0;
}
