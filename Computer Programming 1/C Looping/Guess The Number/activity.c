#include <stdio.h>
int main() {
    int answer = 10;
    int guess = 0;
    
    while(1>0)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
        
        if(guess > answer){
            printf("Your guess is greater than the answer try again\n");
            continue;
        }
        else if(guess < answer){
            printf("Your guess is lesss than the answer.again\n");
            continue;
        }else {
            printf("Correct guess!\n");
            break;
        }
        
    }

    return 0;
}