#include <stdio.h>

int main(void){

	int total;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	printf("How many cents do you have: ");
	scanf("%d", &total);

	quarters = total / 25;
	total = total - (quarters * 25);
	dimes = total / 10;
	total = total - (dimes * 10);
	nickels = total / 5;
	total = total - (nickels * 5);
	pennies = total;

	printf("\nQuarters: %d", quarters);
	printf("\nDimes: %d", dimes);
	printf("\nNickels: %d", nickels);
	printf("\nPennies: %d", pennies);
    printf("\n");

	return 0;

}
