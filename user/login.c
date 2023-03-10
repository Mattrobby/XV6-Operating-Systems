#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char*argv[]) {
	// Username and password endtered stored in the system
	char storedUsername[] = ""; 
	char storedPassword[] = ""; 
	int auth = 0; 

	while(auth != 1) {
		// Username and password entered by the user
		char username[20]; 
		char password[20]; 

		printf("\nUsername: ");
		gets(username, sizeof(username));
		username[strlen(username) - 1] = 0; 

		printf("Password: "); 
		gets(password, sizeof(password));
		password[strlen(password) - 1] = 0; 

		int cmpUsername = strcmp(storedUsername, username) == 0; 
		int cmpPassword = strcmp(storedPassword, password) == 0;



		if (cmpUsername && cmpPassword) {
			auth = 1; 
		} else {
			sleep(10); 
		}
	}
	
	printf("\n"); 
	exec("sh", argv); 

}
