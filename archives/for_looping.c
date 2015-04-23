#include <stdio.h>

int main(void){

	int i;
	for (i=0; i<=100; i++)
		printf("%d ", i);

	for (int x=0; x<=100; )
		printf("%d ", x++);

	int y = 100;
	for (;y<=100;)
		printf("%d ", y++);

	return 0;
}
