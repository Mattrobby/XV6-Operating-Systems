#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char*argv[]) {
	int pid = getpid(); 
	printf("pid=%d", pid);
	printf("\n");
	exit(0); 
} 
