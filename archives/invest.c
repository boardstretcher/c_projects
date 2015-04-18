#include <stdio.h>

int main(void){
	
	int i = 0;
	int fee = 0;
	float rate = 0.0;

	printf("Enter the total investment: ");
	scanf("%d", &i);

	if (i < 2500) {
		fee = 30;
		rate = 1.7;
	}
	else if (i >= 2500 && i < 6250) {
		fee = 56;
		rate = 0.66;
	}
	else if (i >= 6250 && i < 20000) {
		fee = 76;
		rate = 0.34;
	}
	else if (i >= 20000 && i < 50000){
		fee = 100;
		rate = 0.22;
	}
	else {
		fee = 155;
		rate = 0.18;
	}

	printf("Fee : %d \n", fee);
	printf("Rate: %.2f \n", rate);
	printf("After: %.2f \n", (i * (1 - rate / 100)) - fee);

	return 0;
}
