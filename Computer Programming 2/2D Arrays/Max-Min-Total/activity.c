#include <stdio.h>
int main(void){
	
	int values[3][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
	};
	int total = 0;
	int maximum = values[0][0];
	int minimum = values[0][0];
	
	for(int i = 0; i < 3; i++){
		for(int k = 0; k < 4; k++){
			total+= values[i][k];
		
			if(values[i][k] > maximum){
				maximum = values[i][k];
			}
			if(values[i][k] < minimum){
				minimum = values[i][k];
			}
		}
	}
	
	printf("Sum of all elements : %d\n", total);
	printf("Minimum Value: %d\n", minimum);
	printf("Maximum Value: %d", maximum);
	
	
	return 0;
}