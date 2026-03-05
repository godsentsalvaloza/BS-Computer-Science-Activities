#include <stdio.h>
// Temperature Monitoring System / Array Review
#define DAYS 7
int main(void){
	float temperature[DAYS] = {0};
	float highest = 0;
	float lowest = 0;
	float average = 0;
	
	printf("Temperature Monitoring System\n");
	
	for (int i = 0; i < DAYS; i++){
		printf("Enter temperature for day %d: ", i + 1);
		scanf("%f", &temperature[i]);
	}
	
	highest = temperature[0];
	lowest = temperature[0];
		
	printf("\nRecorded Temperatures ");
		
	for(int i = 0; i < DAYS; i++){
		average += temperature[i];
		printf("%.1f ", temperature[i]);
		
		if(highest < temperature[i]){
			highest = temperature[i];
		}
		
		if(lowest > temperature[i]){
			lowest = temperature[i];
		}
	}
	average = average / DAYS;
	
	printf("\n\nThe highest temperature is: %.1f\n", highest);
	printf("The lowest temperature is: %.1f\n", lowest);
	printf("The average temperature is: %.1f", average);
	
	return 0;
}