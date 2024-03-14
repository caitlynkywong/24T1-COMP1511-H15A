// part1_galaxy.c
//
// This program was written by H15A,
// on 14/03/2024
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.


#include <stdio.h>


#define SIZE 5
#define NEBULA_POINTS -10


enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

struct player {
    int row;
    int col;
};


void print_map(struct celestial_body galaxy[SIZE][SIZE]);


int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // Initialise the galaxy
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            galaxy[row][col].entity = EMPTY;
            galaxy[row][col].points = 0;
        }
    }

    // Place the player in the galaxy
    struct player player;
    printf("Enter the starting position of the player: ");
    scanf("%d %d", &player.row, &player.col);
    while (player.row != 0 && player.row != SIZE - 1 && player.col != 0 &&
           player.col != SIZE - 1) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &player.row, &player.col);
    }
    galaxy[player.row][player.col].entity = SPACESHIP;

    // Prompt for how many planets and nebulae will be added to the galaxy
    printf("How many planets and nebulae are there? ");
    int count;
    scanf("%d", &count);

    // Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    for (int i = 0; i < count; i++) {
        char celestial_type;
        int celestial_row;
        int celestial_col;
        scanf(" %c %d %d", &celestial_type, &celestial_row, &celestial_col);

        if (celestial_type == 'p') {
            int celestial_points;
            scanf("%d", &celestial_points);

            galaxy[celestial_row][celestial_col].entity = PLANET;
            galaxy[celestial_row][celestial_col].points = celestial_points;
        } else if (celestial_type == 'n') {
            galaxy[celestial_row][celestial_col].entity = NEBULA;
            galaxy[celestial_row][celestial_col].points = NEBULA_POINTS;
        }
    }
    
    // Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");
    int star_row;
    int star_col;
    int star_points;
    while (scanf("%d %d %d", &star_row, &star_col, &star_points) == 3) {
        galaxy[star_row][star_col].entity = STAR;
        galaxy[star_row][star_col].points = star_points;
    }

    // Print the map
    print_map(galaxy);
}


// Function prints the map of the galaxy
// 
// @param galaxy: the 2D array representing the galaxy
//
// @returns None
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}