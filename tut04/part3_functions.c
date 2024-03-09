// part3_functions.c
//
// Written by H15A,
// on 07/03/2024
//
// This program is a simple demonstration of functions


#include <stdio.h>

// Function prototype
int add(int number1, int number2);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = add(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// Adds two integers
//
// Parameters:
//      number1 - first integer
//      number2 - second integer
// 
// Returns:
//      sum - sum of the two integers
int add(int number1, int number2) {
    // Function body
    int sum = number1 + number2;
    // return statement
    return sum;
}
