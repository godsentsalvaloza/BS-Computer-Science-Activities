#include <stdio.h>

// function declaration
float computeAverage(float grades[], int size);

int main() {
	// initialize variables
	int numberOfStudents = 0;
	
	printf("** Students' Grade Average **\n");
	
	// get number of student
	printf("Enter the number of students in a class: ");
	scanf("%d", &numberOfStudents);
	getchar();
	
	// initialize array
	float grades[numberOfStudents];
	
	// get student grades through iterating
	for(int i=0; i<numberOfStudents; i++ ){
		printf("Enter the student %d grade : ", (i + 1));
		scanf("%f", &grades[i]);
	}
	
	// output average by calling the computerAverage function
	printf("The average grade of the class is : %.2f", computeAverage(grades, numberOfStudents));
	return 0;
	
}
// Function Definition
float computeAverage(float grades[], int size) {
	float result = 0;
	
	// iterate through the array to get sum
	for(int i = 0; i < size; i++){
		result+= grades[i];
	}
	// divide sum by size to get average
	result /= size;
	
	return result;
}

