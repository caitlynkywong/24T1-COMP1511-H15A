// part4_arithmetic.c
//
// This program was written by H15A,
// on 22/02/2024
//
// This program prints out various arithmetic expressions

#include <stdio.h>

int main(void) {
    double expression_1 = (7 / 2);
    printf("%lf\n", expression_1);


    double expression_2 = (3.0 / 2) + 1;
    printf("%lf\n", expression_2);


    int expression_3 = 'a' + 5;
    printf("%c\n", expression_3);
    printf("%d\n", expression_3);


    char expression_4 = 'F' - 'A' + 'a';
    printf("%c\n", expression_4);
    printf("%d\n", expression_4);

	return 0;
}
