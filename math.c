//awesome
//

#include <stdio.h>
#include <stdbool.h>

int main(void){

	int i = 10;
	int x = 1;

		printf("\ni=%d and x=%d", i, x);
		printf("\ni is %s x", (i<x)?"Less than":
							  (i>x)?"Greater than":
							  (i==x)?"Equal to":"ERROR");
	
	printf("\n\n\n");
	return 0;
}
