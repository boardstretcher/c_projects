#include <stdio.h>

const char program_name[] = "Simple Calendar";
const float program_ver = 1.0f;
const char license[] = "CC-BY 2.0";

int main(int argc, char *argv[]){

	int days, start, lc;

	printf("%s \n", program_name);
	printf("v%.1f \n", program_ver);
	printf("%s", license);

	printf("Enter the number of days in the month: ");
	scanf("%d", &days);
	printf("Starting day (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	// print spaces for start day
	if (start > 1){
		for (int i = 1; i < start; i++){
			printf("   ");
			lc += 1; // increment line count
		}
	}
	
	// print numbers for calendar	
	for (int i = 1; i <= days; i++){
		printf("%3d", i);
		lc += 1; // increment line count
	
		// if line count is 7, create new line
		if (lc == 7) {
			printf("\n");
			lc = 0;
		}
	}

	printf("\n\n\n\n");
	return 0;
}
