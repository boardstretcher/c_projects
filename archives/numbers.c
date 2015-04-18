#include <stdio.h>

int main(void){

	int number;

	printf("Type a number (0-999): ");
	scanf("%d", &number);

	if (number <= 9)
		printf("One Digit Number\n");
	else if (number <= 99)
		printf("Two Digit Number\n");
	else if (number <= 999)
		printf("Three Digit Number\n");
	else
		printf("More than Three Digits!\n");

	return 0;
}
