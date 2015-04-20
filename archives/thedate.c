// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){

	int month, day, year;

	printf("What is the date (xx/xx/xxxx): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("In normal english it is the ");

	switch(day){
		case 1: printf("First"); break;
		case 2: printf("Second"); break;
		case 3: printf("Third"); break;
		case 4: printf("Fourth"); break;
		case 5: printf("Fifth"); break;
		case 6: printf("Sixth"); break;
		case 7: printf("Seventh"); break;
		case 8: printf("Eighth"); break;
		case 9: printf("Ninth"); break;
		default: printf("Whatevereth"); break;
	}

	printf(" of ");

	switch(month){
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break; 
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
		default: printf("Unknown Month"); break;
	}
	printf(" %d.", year);

	return 0;
}
