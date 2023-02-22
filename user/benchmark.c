#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char* argv[]) {
	union{
		uint64 i;
		double d;
	} start;

	union { 
		uint64 i;
		double d; 
	} end; 


	start.i = uptime_seconds(); 

	if (fork() == 0)
		exec(argv[1], ++argv);

	wait(0);
	end.i = uptime_seconds();

	printf("It took %d.%d seconds to run\n", end.d - start.d, (start.d - (int)start.d) - (end.d - (int)end.d) * 100000); 

	printf("Start: %d.%d \nEnd: %d.%d \n", start.d, (start.d - (int)start.d) * 100000, end.d, (end.d - (int)end.d) * 100000);

	//  HaHa, theres a security issue here since we don't check for 0 at the end
	//  TODO: fix the security issue
}
