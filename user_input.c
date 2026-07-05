#include <stdio.h>
#define PI 3.1415 

int main() {
	float area, circumference, radius;
	printf("Please insert the radius:");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	
	printf("\nThe circumference is %f\n", circumference);
	printf("The area is: %f\n", area);
	
	return 0;
}
