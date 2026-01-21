#include <stdio.h>

// funcation declaration
float calculateSales(int[]);
char* evaluatePerformance(float sales);

int main(void){
	// initialize array
	int saleOfTheDay[7] = {0};
	
	printf("**Sales Calculator & Performance Evaluation**\n\n");
	
	// get user input
	printf("Enter sales for 7 days : \n");
	for(int i = 0; i < 7; i++){
		printf("Day %d : ", i + 1);
		scanf("%d", &saleOfTheDay[i]);
	}
	
	// prints the return of calculate sales with the parameter of sales array 
	printf("\nTotal Sales : %.2f", calculateSales(saleOfTheDay));
	
	// prints the evauluate performance with the parameter of calculate sales
	printf("\nPerformance : %s", evaluatePerformance(calculateSales(saleOfTheDay)));
	
	return 0;
}

// iterates through array and returns summation of integers
float calculateSales(int values[]){
	float sales = 0;
		
	for(int i = 0; i < 7; i++){
		sales += values[i];
	}
	
	return sales;
}

// returns performance evaluation based of prefedined range
char* evaluatePerformance(float sales){
	if(sales > 50000){
		return "Excellent Performance";
	} else if(sales >= 20000 && sales <=50000){
		return "Good Performance";
	} else {
		return "Needs Improvement";
	}
}