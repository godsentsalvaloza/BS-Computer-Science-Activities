// Student Grade Evaluator - SALVALOZA BSCS 1-2
#include <stdio.h>
#include <string.h>

// initialize declaration
char* calculate(float grade);

int main(void) {
	// initialize variable
    char name[100];
    float grade = 0;
    char *result = "";

	// data input
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

	printf("Enter grade: ");
	scanf("%f", &grade);
	
	// function call to calculate grade	
	result = calculate(grade);

	// output
	printf("\nRemark: %s", result);
		
    return 0;
}
char* calculate(float grade){
	// calculate
	if(!(grade > 100 || grade < 0)){
		if(grade >= 90){
			return "Excellent";
		}else if(grade >=80){
			return "Very Good";
		}else if(grade >= 70) {
			return "Good";
		}else {
			return "Passed";
		}
	}else {
		return "Invalid Input";
	}
}
