/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
	int sub1, sub2, sum;
	float avg;
	
	printf("input subject 1 mark: ");
	scanf("%d", &sub1);
	
	printf("input subject 2 mark: ");
	scanf("%d", &sub2);
		
	sum = sub1 + sub2;
	avg = sum / 2.0;
	
	printf("Avarage is: %.2f", avg);
  
  return 0;
}

