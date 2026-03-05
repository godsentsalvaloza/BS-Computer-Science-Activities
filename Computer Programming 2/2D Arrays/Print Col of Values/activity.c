#include <stdio.h>
int main(void) {
	int values[3][4];
	
	// get user input
	printf("Enter the elements of the 2D Array: \n");
	for(int i = 0; i < 3; i++){
		for(int k = 0; k < 4; k++){
			printf("Enter value for row %d and column %d: ", i + 1, k + 1);
			scanf("%d", &values[i][k]);
		}
	}
	
	printf("\n\n");
	
	// print values
	printf("Printing by column:\n");
	for(int i = 0; i < 4; i++){
		for(int k = 0; k < 3; k++){
			printf("%d ", values[k][i]);
		}
		printf("\n");
	}
	
	
	return 0;
	
	
}