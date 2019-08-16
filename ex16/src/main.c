#include <stdio.h>

int main(int argc, char **argv){
	int m[5];
	int i;

	for( i = 0; i < 5; i++){
		printf("m[%d]=",i);
		scanf("%d", &m[i]);
	}

	printf("\nOutput:\n");

	for( i = 0 ; i < 5 ; i++){
		printf("m[%d]=%d\t", i, m[i]);
	}
	printf("\n");
	return 0;
}
