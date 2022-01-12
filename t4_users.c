// t4_users.c
// This program is aimed to gather an user input, which is a floating point value, and use floor, round, and ceiling functions to print out appropriate values.
// Huy Nguyen
// 1/22/2019

#include <stdio.h>
#include <math.h>

int main() { // main function
	
	printf("Enter a float value: "); // Asking the user to input a floating point value
	
	float float_value; // this variable stores the user input value
	
	int input = scanf("%f", &float_value); // this variable stores the return value of the scanf function. If this variable = 0 then 'if' condition will be true.
	
	if (input == 0) {
		printf("scanf error: (%d)\n", input); 
	} else {
	printf("The floor value is %.0f\nThe round value is %.0f\nThe ceiling value is %.0f\n", floor(float_value), round(float_value), ceil(float_value));
	// The code above prints the values of different functions when the user enters a floating point value.
	}
	
	return 0;
}
