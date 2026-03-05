// Password Verification Systemr - SALVALOZA BSCS 1-2
#include <stdio.h>
#include <string.h>

int main(void) {
	// initialize variable
   	char password[50] = "1234";
   	char input[50]	;
   	
   	// loop for 3 attempts
   	for(int i = 3; i > 0; i--){
   		
   		// input data
   		printf("Enter Passsword: ");
   		fgets(input, sizeof(input), stdin);
    	input[strcspn(input, "\n")] = 0;
    	
    	// check equality
    	if(strcmp(password,input) == 0){
    		printf("Access Granted\n");
    		return 0;
		}
		printf("Incorrect Password\n\n");
	   }
	   
    return 0;
}