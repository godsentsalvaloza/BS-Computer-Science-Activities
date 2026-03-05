// Grocery Total Calculator - SALVALOZA BSCS 1-2
#include <stdio.h>

int main(void) {
	// initialize variable
    int numOfItems = 0;
	float price = 0;
	float totalPrice = 0;
	
	// get user input
	printf("Enter number of items: ");
	scanf("%d", &numOfItems);
	
	// iterate and summate value
	for(int i = 1; i <= numOfItems; i++){
		price = 0;
		printf("Enter price for item %d: ", i);
		scanf("%f", &price);
		totalPrice += price;
	}
	
	// output
	printf("Total Amount: %.2f", totalPrice);
    return 0;
}