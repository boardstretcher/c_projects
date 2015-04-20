#include <stdio.h> //include the standard c io library

int main(void){ //main function, return an int, input is void

	int n, c;

	for(;;){
		printf("What is the number of the day(1-7): ");
		scanf("%d", &n);
		switch(n){
			case 1: printf("Monday"); break;
			case 2: printf("Tuesday"); break;
			case 3: printf("Wednesday"); break;
			case 4: printf("Thursday"); break;
			case 5: printf("Friday"); break;
			case 6: printf("Saturday"); break;
			case 7: printf("Sunday"); break;
			default: printf("NO. PICK A NUMBER 1-7 FUCKING IDIOT!\n"); break;
		}
		printf("\n");
		printf("Would you like to continue? 0=no, 1=yes: ");
		scanf("%d", &c);
		if (c == 0)
			break;
		if (c != 1)
			printf("0 or 1 ARE THE FUCKING OPTIONS. IDIOT.\n");
	}

	return 0; //return 0 to the caller/shell
}
