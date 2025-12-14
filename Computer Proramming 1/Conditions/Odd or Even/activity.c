#include<stdio.h>
int main(){
	// problem 2
	int value;
	printf("**Odd or Even**\n");
	printf("Enter a number: ");
	scanf("%d", &value);
	
	if(value % 2 != 0){
		printf("The value is odd");
	}else {
		printf("The value is even");
	}
	return 0;
}
