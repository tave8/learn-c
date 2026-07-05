#include <stdio.h>

/*
This program uses pointers and uses assertions 
to verify that the operations are performed as expected.
*/

void pass_pointer(int *x, int value);
void pass_copy(int x, int value);
void assert_equal_int(int expected, int actual, char test_name[]);


int main() {
	int initial_value = 0;
	int new_value = 1;
	
	// both variables have the same initial value
	int passed_as_pointer = initial_value; 
	int passed_as_copy = initial_value;
	
	// do operations
	pass_pointer(&passed_as_pointer, new_value);
	pass_copy(passed_as_copy, new_value);
	
	// assertions
	assert_equal_int(passed_as_pointer, 1, "PASSED AS POINTER");
	assert_equal_int(passed_as_copy, 0, "PASSED AS COPY");
	
	return 0;
}


void pass_pointer(int *x, int value) {
	*x = value;
}

void pass_copy(int x, int value) {
	x = value;
}


void assert_equal_int(int expected, int actual, char test_name[]) {
	if(expected == actual) {
		printf("ok - TEST '%s' - ASSERT EQUAL\n", test_name);
		return;
	}
	printf("failed - TEST '%s' - ASSERT EQUAL\n", test_name);
	printf("----- expected: %d, actual %d\n", expected, actual);
}
