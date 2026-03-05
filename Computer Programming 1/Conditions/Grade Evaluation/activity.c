#include <stdio.h>
int main() {
	float grade = 0;
	
	printf("** Grade Evaluation **\n");
	
	printf("Enter Grade : ");
	scanf("%f", &grade);
	
	if(grade >= 75){
		printf("You passed the subject!");
	}else {
		printf("You failed the subject.");
	}
	
    return 0;
}