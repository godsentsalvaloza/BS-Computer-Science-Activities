#include<stdio.h>
int main(){
	// problem 4
	char input;
	
	printf("**Character Checker**\n");
	printf("Enter a character: ");
	scanf(" %c", &input);
	
	if(input >= 'a' && input <= 'z'){
		printf("\"%c\" is a lowercase character.\n", input);
	} else if( input >= 'A' && input <= 'Z'){
		printf("\"%c\" is an uppercase character.\n", input);
	} else if (input >= '0' && input <= '9') {
		printf("\"%c\" is a digit.", input);
	} else {
		printf("\"%c\" is a special chracter.\n", input);
	}
	return 0;
}