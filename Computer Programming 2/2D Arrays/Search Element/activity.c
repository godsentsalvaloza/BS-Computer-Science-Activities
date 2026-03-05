#include <stdio.h>

int main(void){
	// initialize variables
	int values[3][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
	};
	int input = 0;
	
	
	printf("Search element in two-dimentional array\n\n");
	
	// get input
	printf("Enter the element you want to search for: ");
	scanf("%d", &input);
	
	// search for matches
	for(int i = 0; i < 3; i++){
		for(int k = 0; k < 4; k++){
			// output when match found - early exit
			if(input == values[i][k]){
				printf("Element %d found in row %d, column %d", input, i + 1, k + 1);
				return 0;
			}
		}
	}
	// output when not matches found
	printf("ERROR: No matches found");
	return 0;
}