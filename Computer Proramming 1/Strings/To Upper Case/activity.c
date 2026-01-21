#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char name[50];
	int length = 0;
	
	printf("Enter name : ");
	
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = 0;	
	
	while(name[length] != '\0'){
		name[length] = toupper(name[length]);
		length++;
	}	
	
	printf("\nThe Name in UPPERCASE is : %s\n", name);
	return 0;
}