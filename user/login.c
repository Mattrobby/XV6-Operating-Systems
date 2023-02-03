#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char*argv[]) {
	char username[50]; 
	char password[50]; 

	printf("Username: ");
	gets(username, sizeof(username));

	printf("Password: "); 
	gets(password, sizeof(password));

	printf("Username: %s", username);
	printf("Password: %s", password);
}
