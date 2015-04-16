#include <stdio.h>

// what is my age in what year

int age;
const int NUM = 42;
const int YEAR = 2025;
const float PI = 3.14;

int main(void){
	printf("\nHow old are you now: ");
	scanf("%d", &age);
	printf("\nIn %d you will be %d years old.\n", YEAR, age + (YEAR - 2015));
	printf("The value of pi * year * num: %.2f", (float)PI * (45.4112 * NUM));

	return 0;
}
