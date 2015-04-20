#include <stdio.h>

const int SECS_PER_MIN = 60;
const int SECS_PER_HOUR = 3600;

int main(void){

	int seconds;

	printf("Enter the number of seconds (< 64000): ");
	scanf("%d", &seconds);

	printf("That is %d minutes!\n", (seconds / SECS_PER_MIN));

	return 0;
}
