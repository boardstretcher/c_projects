#include <stdio.h>

// page 20, ex 2
int main(void){

	int radius, area;
	printf("Enter radius: ");
	scanf("%d", &radius);
	area = (3.14159 * radius * radius);
	printf("\nArea = %d \n", area);
	
	return 0;
}
