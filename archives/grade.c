// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){

	int grade1, grade2 = 0;

	printf("Enter a numerical grade (1-99): ");
	scanf("%1d%1d", &grade1, &grade2);

	switch(grade1){
		case 9: case 8: case 7: case 6:
			printf("Passing");
			break;

		default: printf("Failing");
	}

	return 0;
}
