#include <stdio.h>

int main(){
	// constants
	const int BURGER_MEAL = 150;
	const int CHICKEN_MEAL = 200;
	const int PASTA_MEAL = 250;
	const float PREMIUM_DISCOUNT = 0.90;
	
	// variables
	int mealChoice;
	int isMember;
	float finalCost;

	printf("** Meal Selection and Discount System **\n");

	// get user input
	printf("Meal choice (1 for Burger, 2 for Chicken, 3 for Pasta): ");
	scanf("%d", &mealChoice);
	
	printf("Membership Status (1 for Regular, 2 for Premium): ");
	scanf("%d", &isMember);
	
	// check the validity
	if( mealChoice > 3 || mealChoice < 1 || isMember > 2 || isMember < 1 ){
		printf("\nERROR: Invalid Input. Please Try Again.\n");
		return 1;
	}
	
	// calculate raw price
	switch(mealChoice){
		case 1: 
				finalCost = BURGER_MEAL;
				break;
		case 2:
				finalCost = CHICKEN_MEAL;
				break;
		case 3: 
				finalCost = PASTA_MEAL;
				break;
	}
	
	// check for discounts
	if(isMember == 2){
		finalCost *= PREMIUM_DISCOUNT;
	}
		
	// print pirce
	printf("\n Your final meal cost is: %.2f pesos\n", finalCost);
	return 0;
}



