//generated from skel/main.c

#include <stdio.h>

int main(int argc, char *argv[]){

	int time1, time2;

	printf("Enter a 24-hour formatted time (20:10): ");
	scanf("%d:%d", &time1, &time2);
	
	if (time1 <= 12) 
		printf("The time is %d:%dam\n", time1, time2);
	else if (time1 > 12) {
		time1 = time1 - 12;
		printf("The time is %d:%.2dpm\n", time1, time2);
	}

	return 0;
}
