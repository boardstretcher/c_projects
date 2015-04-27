#include <stdio.h>

int main(void){
    
    char myArray[] = {'a','b','c','d','e','f','g','h',
                 'i','j','k','l','m','n','o','p'};
                 
    int size = sizeof(myArray) - 1;
    char search = 'k';
    
    int lower = 0;
    int upper = size;
    int middle = (lower + upper) / 2;
    
    while ((myArray[upper] != search) && 
            (myArray[middle] != search) &&
              (myArray[lower] != search)) {
                  
        if (myArray[middle] < search) {
            lower = middle + 1;
            middle = (lower + upper) / 2;
        }
        
        if (myArray[middle] > search) {
            upper = middle - 1;
            middle = (lower + upper) / 2;
        }
    }
    
    printf("Found search term: %c. Lower: %d Middle: %d Upper: %d \n", search, lower, middle, upper);
    
    return 0;
}