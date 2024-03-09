// part2_scanf_return.c
//
// This program was written by Caitlyn Wong (z5360361),
// on 29/02/2024
//
// Inspired by Gab Steiner's tutorial code
//
// This program tests what scanf returns


#include <stdio.h>

int main(void) {
    printf("ENTER INPUT(S): ");


    // Scan in one integer
    /*
    int variable_1;
    int scanf_return;

    scanf_return = scanf("%d", &variable_1);

    printf("The value of variable_1 is: %d\n", variable_1);
    printf("scanf() returned: %d\n", scanf_return);
    */
    // 3      => variable_1 = 3, scanf_return = 1
    // 12.5   => variable_1 = 12, scanf_return = 1
    // f      => variable_1 = uninitialized, scanf_return = 0
    // CTRL+D => variable_1 = uninitialized, scanf_return = -1


    // Scan in two integers
    /*
    int variable_1;
    int variable_2;
    int scanf_return;

    scanf_return = scanf("%d %d", &variable_1, &variable_2);

    printf("The value of variable_1 is: %d\n", variable_1);
    printf("The value of variable_2 is: %d\n", variable_2);
    printf("scanf() returned: %d\n", scanf_return);
    */
    // 3  8     => variable_1 = 3, variable_2 = 8, scanf_return = 2
    // 4 12.2   => variable_1 = 4, variable_2 = 12, scanf_return = 2
    // 5 f      => variable_1 = 5, variable_2 = uninitialized, scanf_return = 1
    // a f      => variable_1 = uninitialized, variable_2 = uninitialized, scanf_return = 0
    // CTRL+D 5 => variable_1 = uninitialized, variable_2 = uninitialized, scanf_return = -1


    // Keep scanning until CTRL+D (or anything other than an integer is entered)
    int variable_1;
    int scanf_return;

    scanf_return = scanf("%d", &variable_1);
    while (scanf_return == 1) {
        printf("The value of variable_1 is: %d\n", variable_1);
        scanf_return = scanf("%d", &variable_1);
    }


    // A shorter but equivalent version of the above CTRL+D loop
    /*
    int variable_1;

    while (scanf("%d", &variable_1) == 1) {
        printf("The value of variable_1 is: %d\n", variable_1);
    }
    */


	return 0;
}