#include<stdio.h>
int main(){
	// declear variables
	float num1;
	float num2;
	
	// get user-input
	printf("**Arithmetic Calculator**\n");
	printf("Enter first value: ");
	scanf("%f", &num1);
	printf("Enter second value: ");
	scanf("%f", &num2);
	
	// print values
	printf("\nAdding %.2f and %.2f results to %.2f\n",num1,num2, (num1 + num2));
	printf("Subtracting %.2f and %.2f results to %.2f\n",num1,num2, (num1 - num2));
	printf("Multiplying %.2f and %.2f results to %.2f\n",num1,num2, (num1 * num2));
	printf("Dividing %.2f and %.2f results to %.2f\n",num1,num2, (num1 / num2));
	
	return 0;	
}