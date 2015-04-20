#include <stdio.h>

int main(void) {

	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (num > 0){
		printf("Number: %10d Squared: %10d\n", num, (num * num));
		num--;
	}
	return 0;
}
