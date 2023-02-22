#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char* argv[]) {
	union{
		int i;
		double d;
	} start;

	union { 
		int i;
		double d; 
	} end; 


	start.i = uptime_seconds(); 

	if (fork() == 0)
		exec(argv[1], ++argv);

	wait(0);
	end.i = uptime_seconds();

	printf("It took %f seconds to run\n", end.d - start.d); 

	printf("Start: %f \nEnd: %f \n", start.d, end.d);

	//  HaHa, theres a security issue here since we don't check for 0 at the end
	//  TODO: fix the security issue
}
