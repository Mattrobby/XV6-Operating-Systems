#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char*argv[]) {
	char username; 
	scanf("Username: %s", username);
	printf("%s", username);
}
