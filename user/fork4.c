#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main (int argc, char*argv[]) {
  // Copying argv to new array and putting 0 at the end 
  char* arguments[argc]; 

  for (int i = 0; i < argc; i++) {
    arguments[i] = argv[i+1];
  }
  
  arguments[argc] = 0; 

	exec(argv[1], arguments);
}

