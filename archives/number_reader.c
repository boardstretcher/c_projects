// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){
	
	int digit1, digit2 = 0;

	printf("Enter a two-digit number (20-59): ");
	scanf("%1d%1d", &digit1, &digit2);

	switch(digit1) {
		case 2: printf("twenty"); break;
		case 3: printf("thirty"); break;
		case 4: printf("forty"); break;
		case 5: printf("fifty"); break;
		default: printf(":: out of range ::");
	}
	switch(digit2) {
		case 0: printf(" "); break;
		case 1: printf("one"); break;
		case 2: printf("two"); break;
		case 3: printf("three"); break;
		case 4: printf("four"); break;
		case 5: printf("five"); break;
		case 6: printf("six"); break;
		case 7: printf("seven"); break;
		case 8: printf("eight"); break;
		case 9: printf("nine"); break;
		default: printf(":: unknown ::");
	}
	printf("\n");
	return 0;
}
