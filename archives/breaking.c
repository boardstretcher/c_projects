//include the c standard io library
#include <stdio.h>

//global constant, an array of characters called program[]
const char program[] = "Break test v.1a\n";

//main
int main(int argc, char *argv[]){

	//declare the variable num
	int num;
	//print the array of characters called program
	printf("Program: %s", program);

	for (;;){ //;; is the null expression
		printf("\nEnter a number (0 to quit): ");
		//read a number into the &ddress of variable num
		scanf("%d", &num);
		if (num == 0)
			//if variable num value is equal to 0 then break from loop
			break;
	}




	//return a value of 0 to the caller
	return 0;
}
