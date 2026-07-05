#include <stdio.h>
#define ARRAY_LEN 10

int main() {

	int size;
	// I/O: enter array size
	printf("Enter the array size:\n");
	scanf("%d", &size);

	int array[size];
	
	// fill array
	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
	
	// print: each array value
	for(int i = 0; i < size; i++) {
		printf("Index: %d, Value: %d\n", i, array[i]);
	}
	
	return 0;
}
