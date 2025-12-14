#include <stdio.h>
int main(){
	
	int numberOfDays = 7;
	float temperatuers[7];
	float summation = 0;
	
	printf("** Temperature Analyzer **\n\n");
	
	for(int i = 1; i <= numberOfDays; i++){
		printf("Enter Temperature for day %d : ", i);
		scanf("%f", &temperatuers[i - 1]);
	}
	
	for(int i = 0; i < numberOfDays; i++){
		summation += temperatuers[i];
	}
	
	printf("\nAverage Temperature for the past week : %.2f", summation / numberOfDays);
	
	return 0;
}