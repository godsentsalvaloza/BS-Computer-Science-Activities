#include <stdio.h>

int main(){
    // initialize variables
    int multiplicand;
    int multiplier;
    char isRepeat = 'y';
    
    printf("** Multiplication Table Generator **\n");
    
    do{
    	// get input
        printf("\nEnter a Number to generate its multiplication table: ");
        scanf("%d", &multiplicand);
        
        printf("Up to what number should the table go: ");
        scanf("%d", &multiplier);
        
        // validate input
        if(multiplier < 0){
        	printf("\nERROR: Please enter positive integers only\n");
        	continue;
		}
        
        // calculate table
        for(int i = 1; i <= multiplier; i++){
            printf("%d x %d = %d \n", multiplicand, i, (i * multiplicand));
        }
        
        // ask isRepeat
        printf("\nDo you want to try again? [y] = YES [n] = NO: ");
        scanf(" %c", &isRepeat);
        
    } while(isRepeat == 'y' || isRepeat == 'Y');
    
    return 0;
}