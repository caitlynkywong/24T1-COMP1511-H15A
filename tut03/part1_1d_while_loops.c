// part1_1d_while_loops.c
//
// Written by Caitlyn Wong (z5360361), 
// on 29/02/2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    printf("Start of loop!\n");

    int x = 0;
    while (x < 10) {
        printf("%d\n", x);

        // Other ways to increment x:
        // x = x + 1;
        // x += 1;
        x++;
    }

    printf("End of loop!\n");

    return 0;
}
