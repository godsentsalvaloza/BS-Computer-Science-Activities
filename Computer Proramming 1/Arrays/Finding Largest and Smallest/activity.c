#include <stdio.h>
int main(){
	// initialize variables;
	const int ARRAY_LENGTH = 8;
	int numbers[] = {15, 22, -5, 30, 42, 7, 8, -12};
	int largest = numbers[0];
	int smallest = numbers[0];
	
	printf("** Finding the Largest and Smallest Integer **\n\n"); 
	
	// iterates through the array and check largest and smallest
	for(int i = 0; i < ARRAY_LENGTH; i++){
		if(numbers[i] > largest){
			largest = numbers[i];
		}
		if(numbers[i] < smallest){
			smallest = numbers[i];
		}
	}
	
	// print the largest & smallest
	printf("Largest : %d\n", largest);
	printf("Smallest : %d\n", smallest);
	
	return 0;
}