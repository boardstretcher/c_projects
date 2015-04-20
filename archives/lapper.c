#include <stdio.h>

const int LAPS_PER_MILE = 4;
const int CURRENT_YEAR = 2015;

float miles_covered;
int laps_run, year_of_birth, current_age;

int main(void){

	printf("How many laps did you run: ");
	scanf("%d", &laps_run);

	printf("What year were you born: ");
	scanf("%d", &year_of_birth);

	current_age = CURRENT_YEAR - year_of_birth;
	miles_covered = (float) laps_run / LAPS_PER_MILE;

	printf("You ran %.2f miles!\n", miles_covered);
	printf("Not bad for someone that is %d years old!\n", current_age);

	return 0;
}
