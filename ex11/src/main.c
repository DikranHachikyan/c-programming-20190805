#include <stdio.h>

/**
 * 2+4+...+98+100=?
 */
int main(int argc, char **argv){
	int suma = 0;
	int i = 1;
	int n = 100;

	while( i <= n ){
		i++;
		if( (i % 2) != 0 ) continue;
		suma += i;
	}

	printf("suma (2+4+...+%d)=%d\n",n, suma);


	return 0;
}
