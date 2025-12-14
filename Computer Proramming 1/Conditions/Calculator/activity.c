#include<stdio.h>
int main(){
	// problem 3
	float num1, num2;
	char operator;
	printf("**Basic calculator**\n");
	printf("Enter first number: ");
	scanf("%f", &num1);
	
	printf("Enter operator: ");
	scanf(" %c", &operator);
	
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	switch(operator){
		case '+':
			printf("Result: %.2f\n", num1 + num2);
			break;
		case '-':
			printf("Result: %.2f\n", num1 - num2);
			break;
		case '*':
			printf("Result: %.2f\n", num1 * num2);
			break;	
		case '/':
			printf("Result: %.2f\n", num1 / num2);
			break;
		default:
			printf("Invalid operator. Use +. -, *, / only.\n");
			break;
	}
	return 0;
}