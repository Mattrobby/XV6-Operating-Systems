#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char* argv[]) {
	double start = uptime_seconds(); 

	if (fork() == 0)
		exec(argv[1], ++argv);

	wait(0);
	double end = uptime_seconds();

	printf("It took %lf seconds to run\n", end-start); 

	printf("Start: %d \nEnd: %lf \n", start, end);

	//  HaHa, theres a security issue here since we don't check for 0 at the end
	//  TODO: fix the security issue
}
