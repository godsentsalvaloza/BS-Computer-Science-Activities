#include <stdio.h>
int main(){
	// initialize variables
	float scienceGrade, mathGrade, englishGrade;
	float average;
	char name[50];
	char studentID[50];
	char result[10];
	
	// get user input;
	printf("** Student Grade Report **\n");
	
	printf("Enter student name: ");
	scanf("%[^\n]", name);
	getchar();
	
	printf("Enter student ID: ");
	scanf("%[^\n]", studentID);
	
	printf("Enter grade in  Math: ");
	scanf("%f", &mathGrade);
	
	printf("Enter grade in  Science: ");
	scanf("%f", &scienceGrade);
	
	printf("Enter grade in  English: ");
	scanf("%f", &englishGrade);
	
	// calculate 
	average = ((mathGrade + englishGrade + scienceGrade) / 3);
	
	// display output
	printf("\n\nStudent Name: %s\n",name);
	printf("Student ID: %s\n", studentID);
	printf("Grade in Math: %.2f\n", mathGrade);
	printf("Grade in Science: %.2f\n", scienceGrade);
	printf("Grade in English: %.2f\n", englishGrade);
	printf("-----------------------\n");
	printf("Average Grade: %.2f\n", average);
	
	// get score rating
	if(average > 100){
		printf("ERROR: No grade are higher than 100");
	}else if (average >= 75){
		printf("Result: Passed");
	}else if (average >= 0){
		printf("Result: Failed");
	}else {
		printf("ERROR: No grade are lower than 0");
	}
}