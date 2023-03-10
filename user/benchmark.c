#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char* argv[]) {
  
  // Copying argv to new array and putting 0 at the end 
  char* arguments[argc]; 

  for (int i = 0; i < argc; i++) {
    arguments[i] = argv[i+1];
  }
  
  arguments[argc] = 0; 


  // Unions since system calls can only return uint64
	union{
		uint64 i;
		double d;
	} start;

	union { 
		uint64 i;
		double d; 
	} end; 


  // Tracking time 
	start.i = uptime_seconds(); 

	if (fork() == 0)
		exec(argv[1], arguments);

	wait(0);
	end.i = uptime_seconds();

	double elapsed = end.d - start.d;
	printf("It took %d.%d seconds to run\n\n", (int)elapsed, ((start.d - (int)start.d) - (end.d - (int)end.d)) * 1000); 
}
