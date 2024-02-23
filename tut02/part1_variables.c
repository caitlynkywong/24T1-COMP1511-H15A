// part1_variables.c
//
// This program was written by H15A,
// on 22/02/2024
//
// This program shows how to declare and initialise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int variable_1;
    char variable_2;
	
    // 2. Initialise the variables
    variable_1 = 6;
    variable_2 = 'a';

	// Declaring and initalising in the same line
    double variable_3 = 3.1415;
    
    // 3. Print the variables
    printf("%d\n", variable_1);
    printf("%c\n", variable_2);
    printf("%lf\n", variable_3);
    
    // 4. Reassign the value of a variable
    variable_1 = 12;

	// 5. Re-print the variables
    printf("%d\n", variable_1);

	return 0;
}
