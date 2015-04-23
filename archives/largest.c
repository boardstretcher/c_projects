// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){

	int largest = 0;
	int i = 0;

	printf("Enter a number and I will keep track of the largest\n");
	printf("Enter 0 to quit.\n");
	for (;;) {
		printf("Your number: ");
		scanf("%d", &i);

		//if input is 0, then break out of the for loop
		if (i == 0)
			break;

		//if input is bigger than 'largest' then assign input to 'largest'
		if (i > largest)
			largest = i;
	}

	printf("The largest number you entered was %d\n", largest);

	return 0;
}
