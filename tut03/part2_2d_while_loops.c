// part2_2d_while_loops.c
//
// This program was written by H15A,
// on 29/02/2024
//
// This program is a simple demonstration of a 2D while loop 


#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    printf("Start of outer loop!\n\n");

    int row = 0;
    while (row < MAX_ROW) {
        printf("Start of inner loop!\n");

        int col = 0;
        while (col < MAX_COL) {
            printf("%d ", col);
            col++;
        }

        printf("\nEnd of inner loop!\n\n");
        row++;
    }

    printf("End of outer loop!\n");

    return 0;
}
