#include <stdio.h>

int main(int argc, char **argv){
	int a = 2;
	int b = 0;

	b = a++;
	/*
	 1. b = a
	 2. a++
	 */
	printf("a=%d\nb=%d\n",a,b);

	return 0;
}
