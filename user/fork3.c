#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char*argv[]) {
	int pid = fork();
	if (pid == 0) {
		int pid2 = fork();
		if (pid2 == 0) {
			exec("fork3", argv);
		}
		exec("fork3", argv); 
	}
	wait(0);
	
}
