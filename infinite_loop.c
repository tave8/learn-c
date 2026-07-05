#include <stdio.h>

int main() {
	while(1) {
		int weekday;
		printf("Enter a weekday as integer or exit(0):\n");
		scanf("%d", &weekday);
		switch(weekday) {
		  case 0:
		    printf("Finishing program...\n");
		  	return 0;
			case 1:
			  printf("Monday");
			  break;
			default:
			  printf("(not recognized)");
		}
		printf("\n");
	}
	return 0;
}
