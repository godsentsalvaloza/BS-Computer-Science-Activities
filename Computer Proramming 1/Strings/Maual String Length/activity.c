#include <stdio.h>
#include <string.h>
int main(){
	
	char name[50];
	int length = 0;
	printf("Enter name : ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = 0;	
	
	while(name[length] != '\0'){
		length++;
	}
	
	printf("The length is : %d", length);
	return 0;
}