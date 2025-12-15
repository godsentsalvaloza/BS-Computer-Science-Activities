#include <stdio.h>
int main() {
	
	int numberOfElements = 0;
	float summation = 0;
		
	printf("** Average of Numbers **\n\n");
	printf("Enter number of stuents : ");
	scanf("%d", &numberOfElements);
	
	float elementArray[numberOfElements];
	
	for(int i=0; i < numberOfElements; i++){
		printf("Enter Grades : ");
		scanf("%f", &elementArray[i]);
		summation += elementArray[i];
	}
	
	printf("The average grade is %.2f", summation / numberOfElements);
	
	return 0;
}