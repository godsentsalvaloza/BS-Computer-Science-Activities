#include <stdio.h>
int main() {
	int numberOfElements = 7;
	float summation = 0;
		
	printf("** Health Mornitoring System **\n\n");
	
	printf("Enter calories burned for each day of the week\n");
	float elementArray[numberOfElements];
	
	for(int i=0; i < numberOfElements; i++){
		printf("Day %d:  ", i + 1);
		scanf("%f", &elementArray[i]);
		summation += elementArray[i];
	}
	
	printf("Total calories burned in the week : %.2f\n", summation);
	printf("Average burned calories per day : %.2f\n", summation / numberOfElements);
	
	if(summation / numberOfElements > 700){
		printf("Fitness Activity level: Active");
	}else if (summation / numberOfElements > 400 && summation / numberOfElements <701){
		printf("Fitness Activity level: Moderate");
	}else {
		printf("Fitness Activity level: Low");
	}
	
	return 0;
}
