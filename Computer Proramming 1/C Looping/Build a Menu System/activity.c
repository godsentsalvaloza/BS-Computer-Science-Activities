#include <stdio.h>
int main() {
	// initialize variable
    int isRepeat = 1;
    int choice = 0;
    
    printf("** Basic Menu System **\n");
    // loop to repeat process when needed
    do{
    	printf("Menu:\n");
    	printf("1. Play Game\n");
    	printf("2. Load Game\n");
    	printf("3. Exit\n\n");
    	
    	printf("Enter Choice : ");
    	scanf("%d", &choice);
    	
    	// change flow based on input
    	switch(choice){
    		case 1:
    			printf("\nPlaying Game...\n\n");
    			break;
    		case 2:
    			printf("\nLoading Game...\n\n");
    			break;
    		case 3:
    			printf("\nExiting...\n\n");
    			isRepeat = 0;
    			break;
    		// fallback when invalid input entered
    		default:
    			printf("\nERROR: Invalid Input. Try again.\n\n");
    			break;
		}
	}while(isRepeat == 1);

    return 0;
}