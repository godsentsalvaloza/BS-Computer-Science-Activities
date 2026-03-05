#include <stdio.h>
#include <string.h>

int main(){
	// declear variables
	char value[100];
	int iterator = 0;
	int current = 0;
	int longest = 0;
	int numWords = 0;
	int actualWords= 1;
	
	// get input
	printf("Enter the number of words : ");
	scanf("%d", &numWords);
	getchar();
	
	printf("Enter the text : ");
	fgets(value, sizeof(value), stdin);
 	value[strcspn(value, "\n")] = 0;
	 
	// check if number of words matches to input
    for(int i = 0; value[i] != '\0'; i++){
        if(value[i] == ' '){
            actualWords++;
        }
    }	
	
	if(actualWords != numWords){
        printf("ERROR: You entered %d words, but only expected %d word/s.\n", actualWords, numWords);
        return 1;
    }
	
	// check the longest by iterating array through splitting values using spaces.
    while(value[iterator] != '\0'){
        if(value[iterator] != ' '){
            current++;
        } else {
            if(current > longest){
                longest = current;
            }
            current = 0;
        }
        iterator++;
    }
    if(current > longest){
        longest = current;
    }
    
    // print output.
	printf("The length of the longest word is : %d", longest);
	
	return 0;
}


