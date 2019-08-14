#include <stdio.h>

/**
 * 1+2+3+...+98+99+100=5050
 */
int main(int argc, char **argv){
	int suma = 0;
	int i = 1;
	int n = 100;

	while( i <= n ){
		if( i > 3 ) break;
		suma += i; /* suma = suma + i */
		i++;
	}

	printf("suma (1+2+...+%d)=%d\n",n, suma);


	return 0;
}
