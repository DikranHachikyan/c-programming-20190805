#include <stdio.h>

/**
 * 1+2+3+...+98+99+100=5050
 */
int main(int argc, char **argv){
	int suma = 0;
	int i = 1;
	int n = 100;


	for( i = 1; i <= n ; i++ ){
		suma += i;
	}

	printf("suma (1+2+...+%d)=%d\n",n, suma);

	/*getchar();*/
	return 0;
}
