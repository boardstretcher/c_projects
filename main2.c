#include <stdio.h>
#include <strings.h>

void printsomething(void);
const char *version="1.0.1";

int main(void){

	int x = 10;
	for (int i=x; i<100; i++)
		printf("i=%d\n", i);

	printsomething();	
	return 0;
}

void printsomething(void){
	printf("\nVersion: %s\n", version);
}
