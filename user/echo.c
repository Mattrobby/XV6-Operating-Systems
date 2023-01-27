#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(
	int argc,    	/* argc is count of arguments, so 'echo hello' has argc=2 */ 
	char *argv[]    /* argv is an array of the char* things:
			         * argv is a pointer to the first grup of pointers,
			         * Each of which is a char*, so each pointes to the first
			 * Letter of a string */  
    )
{
  int i;

  for(i = 1; i < argc; i++){
    /* Write (aka) print to screen (id 1) the string argv[i] and prints exactly N characters
     * where N is determined by strlen(argv[i]) */ 
    write(1, argv[i], strlen(argv[i]));
    if(i + 1 < argc){
      write(1, " ", 1);
    } else {
      write(1, "\n", 1);
    }
  }
  exit(0);
}
