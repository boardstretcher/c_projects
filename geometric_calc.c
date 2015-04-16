#include <stdio.h>

int selection;

int main(void){
menu:
	printf("Geometry Calculator\n");
	printf("-------------------\n");
	printf("1. Area of square\n");
	printf("2. Area of rectangle\n");
	printf("3. Area of triangle\n");
	printf("\n\n");
	printf("Selection: ");
	scanf("%d", selection);
	
	if (selection == 1)
		goto square;
	if (selection == 2)
		goto rectangle;
	if (selection == 3)
		goto triangle;
	goto menu;

square:
	printf("Calculate square area.\n");
	goto end;

rectangle:
	printf("Calculate rectangle area.\n");
	goto end;

triangle:
	printf("Calculate triangle area.\n");
	goto end;

end:
	return 0;
}
