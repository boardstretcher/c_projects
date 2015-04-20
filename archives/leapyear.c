#include <stdio.h>

const int CURRENTYEAR = 2015;

int main(void){
	
	int birth_year, age;
	
	printf("Enter the year you were born: ");
	scanf("%d", &birth_year);

	if (birth_year % 4 == 0)
		printf("You were born in a leap year!\n");
	else
		printf("You were not born in a leap year :(\n");

	age = CURRENTYEAR - birth_year;

	if (age >= 18)
		printf("You can vote!\n");
	if (age >= 21)
		printf("You can drink!\n");
	if (age >= 25)
		printf("Your car insurance is cheap!\n");

	

	return 0;
}
