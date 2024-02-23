// part2_circles.c
//
// This program was written by H15A,
// on 22/02/2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {
	// Prompt the user to input a radius
	printf("Please input the radius of your circle: ");

	// Declare a variable to store the radius
	double radius;

	// Scan in the radius from the user
	scanf("%lf", &radius);

	// Calculate the area
	double area = radius * radius * PI;

	// Print out the area
	printf("The area of the circle is: %lf\n", area);

	return 0;
}
