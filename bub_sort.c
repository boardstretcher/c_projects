#include <stdio.h>

int main(void){

    char myArray[] = {'v','d','a','b','z','g'};
    int swapped;
    
    do {
        swapped = 0;
        for (int i = 0; i < sizeof(myArray) - 1; i++){
            if (myArray[i] > myArray[i+1]){
                char tmp = myArray[i];
                myArray[i] = myArray[i+1];
                myArray[i+1] = tmp;
                swapped = 1;
            }    
        }
    } while (swapped == 1);
    
    for (int i = 0; i < sizeof(myArray); i++)
        printf("%c ", myArray[i]);
    
	return 0;
}
