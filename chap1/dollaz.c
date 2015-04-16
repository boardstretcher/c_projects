#include <stdio.h>


int main(void){
	int dollaz = 0;
	int twentyz = 0;
	int tenz = 0;
	int fivez = 0;
	int onez = 0;

	printf("Enter a number of dollerz: ");
	scanf("%d", &dollaz);
	
	twentyz = dollaz / 20;
	dollaz = dollaz - (twentyz * 20);
	tenz = dollaz / 10;
	dollaz = dollaz - (tenz * 10);
	fivez = dollaz / 5;
	dollaz = dollaz - (fivez * 5);
	onez = dollaz / 1;
	
	printf("\n\n");
	printf("Original dollaz: %d\n", dollaz);
	printf("20s = %d\n", twentyz);
	printf("10s = %d\n", tenz);
	printf("5s = %d\n", fivez);
	printf("1s = %d\n", onez);
    printf("");

	return 0;
}
