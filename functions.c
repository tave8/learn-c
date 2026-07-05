#include <stdio.h>

// to  prevent the compiler from re-declaring its own function,
// we must first declare the function signature at the top of the file

// compute average
double average(double a, double b);
// print average
void print_average(double result);


int main() {
	double num1, num2;
	
	// I/O
	printf("Enter number 1:\n");
	scanf("%lf", &num1);
	printf("Enter number 2:\n");
	scanf("%lf", &num2);
	
	// print average
	print_average(average(num1, num2));

	return 0;
}


double average(double a, double b) {
	return ((a+b)/2);
}


void print_average(double result) {
	printf("Average is:%f\n", result);
	return;
}
