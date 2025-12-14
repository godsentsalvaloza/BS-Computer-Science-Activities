#include<stdio.h>

int main(){
	// declear constants
	const int MIN_INCOME = 15000;
	const int MIN_AGE  = 18;
	const int MAX_AGE = 65;
	const int LOAN_MULTIPLIER = 10;

	// declear variables;
	float monthlyIncome, desiredLoan;
	int age;
	
	printf("**Loan Eligibility Checker**\n");
	
	// gather information
	printf("Enter monthly income: ");
	scanf("%f", &monthlyIncome);
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter desired loan amount: ");
	scanf("%f", &desiredLoan);
	
	// check for loan validity
	if(!(monthlyIncome >= MIN_INCOME) || !(age>= MIN_AGE && age<= MAX_AGE) || !(desiredLoan <= (monthlyIncome * LOAN_MULTIPLIER))){
		printf("\nSorry, you do not meet the loan eligibility requirements.");
	} else {
		printf("\nCongratulations! You are eligible for the loan.");
	}
	return 0;
}