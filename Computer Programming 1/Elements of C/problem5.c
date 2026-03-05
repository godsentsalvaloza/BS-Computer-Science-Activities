#include <stdio.h>
void main() {
	// declear variable
	float celsius;
	float fahrenheit;
	
	// get user-input
	printf("**Temperature Converter**\n");
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	
	// calculate
	fahrenheit = ((celsius * 1.8 ) + 32);
	
	// print values
	printf("The temperature in Fahrenheit is %.2f",fahrenheit);
	return 0;
}