#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv){
	int *p;
	int m[] = {12,34,56,78,90};
	int i;

	p = &m[0]; /* адреса на 1-я елемент*/

	for( i = 0 ; i < 5 ; i++){
		printf("[%d]=%d address:%p\n", i, p[i], &p[i]);
	}
	printf("addr:%p\n", p);
	return 0;
}
