#include <stdio.h>
#include "include/steves_functions.h"

int main(void){

	int x;

	x = square_it(10);
	printf("10 squared is %d\n", x);

	x = cube_it(10);
	printf("10 cubed   is %d\n", x);

	return 0;
}
