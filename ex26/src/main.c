#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv){
	int x;
	int *p;

	p = &x; /*записваме в p адреса на x*/

	*p = 100; /* записваме 100 на адреса съхр. p*/

	printf("x=%d\n", x);

	printf("*p=%d address:%p\n", *p, p);

	return 0;
}
