#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char*argv[]) {
	int pid = fork(); 

	if (pid == 0) {
		sleep(10); 
		printf("You are the not Father\n"); 
	} else {
		printf("You are the Father\n");
	}
		
}
