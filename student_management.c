#include <stdio.h>

#define MAX_STUDENTS 100

int ids[MAX_STUDENTS];
char names[MAX_STUDENTS][255];
float grades[MAX_STUDENTS];
int student_count;

// **** FEATURES
void add_student();
void show_students();
void show_student_at_idx();
void search_student();

// **** HELPERS
// is the students full?
int is_students_full();
void print_students_full();


int main() {
	int choice;
	student_count = 0;
	
	while(1) {
		printf("1. Add student\n2. Show students\n3. Search student\n4.Exit program\n");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				add_student();
				break;
			case 2:
				show_students();
				break;
			case 3:
				search_student();
				break;
			case 4: 
				return 0;
				break;
			default:
				printf("Operation not recognized, try again.\n");
		}
	}
	return 0;
}


void add_student() {
  // check if students is full
  if(is_students_full()) {
  	print_students_full();
  	return;
  } 

	printf("Enter the student ID:");
	scanf("%d", &ids[student_count]);
	
	printf("Enter the student name:");
	scanf(" %[^\n]", names[student_count]);
	
	printf("Enter the student grade:");
	scanf("%f", &grades[student_count]);
	
	// when a student is added, increase count
	student_count++;
}

void show_students() {
	for(int i = 0; i < student_count; i++) {
		show_student_at_idx(i);
	}
}

void search_student() {
	int target_id;
	
	printf("Enter the ID to search:");
	scanf("%d", &target_id);
	
	for(int i = 0; i < student_count; i++) {
		int found = ids[i] == target_id;
		if(found) {
			show_student_at_idx(i);
			return;
		}
	}
	
	printf("Could not find student with ID %d\n", target_id);
	return;
}


void show_student_at_idx(int idx) {
	int illegal_idx = idx < 0 || idx > student_count;
	if(illegal_idx) {
		printf("Index %d is out of bounds.", idx);
		return;
	}	
	
	printf("ID: %d | Name: %s | Grade: %.2f\n", ids[idx], names[idx], grades[idx]);
	return;
}



int is_students_full() {
	return (student_count >= MAX_STUDENTS);
}

void print_students_full() {
	printf("Students are full!\n");
	return;
}






