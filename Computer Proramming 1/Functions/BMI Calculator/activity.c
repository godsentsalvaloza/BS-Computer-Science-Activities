#include <stdio.h>
#include <math.h>

// function declaration
float computeBmi(float weight, float height);
char* classification(float bmi);

int main() {
	// initialize vriables
	float weight = 0;
	float height = 0;
	
	printf("** BMI Calculator **\n\n");
	
	// get user input
	printf("Enter weight (in kilograms) : ");
	scanf("%f", &weight);
	
	printf("Enter height (in meters) : ");
	scanf("%f", &height);
	
	// output BMI by calling computeBmi function
	printf("The BMI is : %.2f\n", computeBmi(weight, height));
	
	// output classification by calling classification function with return value of computeBmi as argument
	printf("Classification : %s\n", classification(computeBmi(weight, height)));
	return 0;
	
}
// Function Definition
float computeBmi(float weight, float height){
	return weight / (pow(height, 2));
}
char* classification(float bmi) {
	if(bmi >= 25) {
		return "Overweight";
	}else if(bmi >= 18.5 && bmi <=24.9 ){
		return "Normal";
	}else {
		return "Underweight";
	}
}

