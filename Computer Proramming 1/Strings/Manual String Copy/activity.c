#include <stdio.h>
#include <string.h>
int main(){
	char name[50];
	char nameCopy[50];
	int length = 0;
	
	printf("Enter name : ");
	
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = 0;	
	
	while(name[length] != '\0'){
		nameCopy[length] = name[length];
		length++;
	}
	nameCopy[length] = '\0';
	
	
	
	printf("\nThe Name is : %s\n", name);
	printf("The Name Copy is : %s\n", nameCopy);
	return 0;
}