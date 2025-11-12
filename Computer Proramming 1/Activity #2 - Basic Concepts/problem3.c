#include <stdio.h>
int main(){
	// declear and initialize variables
	const float length = 13.28;
	const float width = 11.12;
	float area;
	
	// calculate area
	area = length * width;
	
	//print value
	printf("The area of %.2fcm in length and %.2fcm in width is %.2fcm^2", length, width, area);
	
	return 0;
}
