// generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){
	
	const char program[] = "Square Table";
	const char revision[] = "0.1";
	
	printf("Program: %s Revision: %s", program, revision);

	int n;
	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries: ");
	scanf("%d", &n);

	for (int i=1; i<=n; i++){
		printf("%10d %10d\n", i, i * i);
	}
	return 0;
}
