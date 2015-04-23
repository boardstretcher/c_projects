// generated from skel/main.c

const char program_name[] = "Find Greatest Common Divisor";
const float program_ver = 1.0f;

#include <stdio.h>

int main(int argc, char *argv[]){
	//find the greatest common divisor of a number
	
	int m, n, r;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &m, &n);

	for (; n != 0 ;){
		r = m % n;
		m = n;
		n = r;
	}
	
	printf("m = %d\nn = %d\nr = %d\n", m, n, r);
	return 0;
}
