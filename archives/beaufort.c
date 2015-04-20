// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){

	int speed;

	printf("Wind speed: ");
	scanf("%d", &speed);

	if (speed <= 1)
		printf("Calm");
	else if (speed <= 3)
		printf("Light air");
	else if (speed <= 27)
		printf("Breeze");
	else if (speed <= 47)
		printf("Gale");
	else if (speed <=63)
		printf("Storm");
	else 
		printf("Hurricane");

	printf("\n");
	return 0;
}
