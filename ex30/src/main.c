#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pow2( int a){
	a *= a;
	printf("pow2:%d\n", a);
}

int main(int argc, char **argv){
	int x = 3;

	pow2(x);
	printf("x=%d\n", x);

	return 0;
}
