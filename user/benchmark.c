#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char* argv[]) {
	exec(argv[1], ++argv);
	//  HaHa, theres a security issue here since we don't check for 0 at the end
	//  TODO: fix the security issue
}
