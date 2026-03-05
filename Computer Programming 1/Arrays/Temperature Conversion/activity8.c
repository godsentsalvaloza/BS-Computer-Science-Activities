#include <stdio.h>
int main(){
	
	// initialize variables.
	int conversionUnit = 0;
	int numberOfConversion = 0;
	int isRepeat = 1;
	
	// loop to repeat the entire process when user says so.
	do {
		printf("\n** Temperature Converter **\n\n");
	
		printf("1. Celsius to Fahrenheit\n");
		printf("2. Fahrenheit to Celsius\n\n");
		
		// get what unit to convert to.	
		printf("Choose Conversion (1 or 2) : ");
		scanf("%d", &conversionUnit);
		
		// check input validity.
		if(conversionUnit > 2 || conversionUnit < 1){
			printf("\nERROR: Invalid Input. Only Choose Between 1 or 2.\n\n");
			continue;
		}
	
		// get how many conversions
		printf("How many temperatures do you want to convert? : ");
		scanf("%d", &numberOfConversion);
		
		// initialize array based on given input
		float values[numberOfConversion];
		
		// get temperatures and store in an array
		for(int i = 0; i < numberOfConversion; i++){
			printf("Enter Temperature : ");
			scanf("%f", &values[i]);
		}
		
		printf("\nConverted Temperatures:\n");
		
		// iterate through array 
		for(int i = 0; i < numberOfConversion; i++){
			// check type of conversion. Calculate and print the value.
			if(conversionUnit == 1){
				printf("%.2fC = %.2fF\n", values[i], ((1.8 * values[i]) + 32));
			}else {
				printf("%.2fF = %.2fC\n", values[i], (0.5556 * (values[i] - 32)));
			}
		}
		
		// Loop to ask user whether to repeat process.
		do{
			printf("\nWould you like to try again? (1 for yes / 0 for no) : ");
			scanf("%d", &isRepeat);
			
			// check input validity.
			if(isRepeat == 0){
				printf("Terminating...");
				break;
			}else if(isRepeat == 1){
				break;
			}else {
				// invalid value causes the while block to repeat.
				printf("\nERROR: Invalid Input. Only Choose Between 1 or 2.\n");
				continue;
			}
			
		}while (1 > 0);
		
	}while(isRepeat == 1);
	return 0;
}
