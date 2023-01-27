/*************************************************
 *						 *
 * Print out the arguments given to the program, *
 * one per line, but in sorted order 		 *
 *						 * 
 *************************************************/ 

#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void bubbleSort(char* arr[], int n) {
    int i, j;
    char* temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main (int argc, char*argv[]) {
	bubbleSort(argv, argc); 

	// Iterates over each item in the array
	for (int i=0; i < argc - 1; i++) {
		printf("%s ", argv[i]);
	} 

	printf("\n"); 
	exit(0); 
} 


