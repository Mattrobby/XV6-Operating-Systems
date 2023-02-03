#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char*argv[]) {

	if (fork() == 0) { 
		exec("ls", argv);
	}

	wait(0);
	exec("ls", argv);
}
