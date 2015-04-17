#include <stdio.h>

int main(int argc, char *argv[]){

	int a,b,c,d,e,f,g,h,i,j,k = 0;
	char *x;

	int evens;
	int odds;

	int check_digit;

	printf("\nInput UPC code with spaces: ");
	scanf("%1d%c%1d%1d%1d%1d%1d%c%1d%1d%1d%1d%1d", 
			&a, &x, &b, &c, &d, &e, &f, &x, &g, &h, &i, &j, &k);

	printf("\nUPC Entered: %d %d%d%d%d%d %d%d%d%d%d", 
			a, b, c, d, e, f, g, h, i, j, k);

	evens = b + d + f + h + j;
	odds = a + c + e + g + i + k;
	
	check_digit = (odds * 3) + evens;
	check_digit--;
	check_digit = check_digit % 10;
	check_digit = 9 - check_digit;

	printf("\nCheck Digit: %d", check_digit);
	printf("\nFull UPC: %d %d%d%d%d%d %d%d%d%d%d %d\n",
			a, b, c, d, e, f, g, h, i, j, k, check_digit);
	return 0;
}
