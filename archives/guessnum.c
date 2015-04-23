#include <stdio.h>
#include <stdlib.h>

const int version = 1;

int main(void){

	int num = 20;
	int guess;

	for (;;) {
		printf("What is your guess: ");
		scanf("%d", &guess);
		if (guess < num)
			printf("Too low...\n");
		if (guess > num)
			printf("Too high...\n");
		if (guess == num) {
			printf("CORRECT!\n");
			exit(0);
		}
	}
	return 0;
}
