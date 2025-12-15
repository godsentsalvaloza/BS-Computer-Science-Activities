#include <stdio.h>
int main() {
	
	int numberOfElements = 0;
	int summation = 0;
		
	printf("** Sum of Elements **\n\n");
	printf("Enter number of elements : ");
	scanf("%d", &numberOfElements);
	
	int elementArray[numberOfElements];
	
	for(int i=0; i < numberOfElements; i++){
		printf("Enter Element : ");
		scanf("%d", &elementArray[i]);
		summation += elementArray[i];
	}
	
	printf("The sum of %d numbers is %d", numberOfElements, summation);
	
	return 0;
}