#include <stdio.h>

float sumOfArray(float array[], int arrayNum);

int main(void){
	int arrayNum = 0;
	printf("Enter the number of elements in an array : ");
	scanf("%d", &arrayNum);
	
	float elements[arrayNum];
	
	for(int i = 0; i < arrayNum; i++)
	{
		printf("Enter value for Element %d : ", i + 1);
		scanf("%f", &elements[i]);
	}	
	printf("\nThe sum of the array elements is : %.2f", sumOfArray(elements, arrayNum));
	return 0;
}

float sumOfArray(float array[], int arrayNum){
	float total = 0;
	for(int i = 0; i < arrayNum; i++)
	{
		total += array[i];
	}
	return total;
}
