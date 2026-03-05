#include <stdio.h>
int main(void){
	
	// initalize variables
	int values[3][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
	};
	int row = 0;
	int col = 0;
	
	printf("Access specific element from a matrix\n\n");
	
	// get user input
	printf("Enter row index (0-2) : ");
	scanf("%d", &row);
	
	printf("Enter col index (0-3) : ");
	scanf("%d", &col);
	
	// print output
	printf("Grade at row index %d, column index %d : %d", row, col, values[row][col]);
	return 0; 
}