#include <stdio.h>

int main(){
	// declear variables
	char name[50];
	int output = 0;
	
	// get input
	printf("Enter the name : ");
	scanf("%s", name);
	
	// check if odd or even
	if((int)strlen(name) % 2 == 0){
		output = 1;
	}else {
		output = 2;
	}
	
	// print output
	printf("The number of character is : %d\n", (int)strlen(name));
	printf("Output : %d", output);
	return 0;
	
}


