#include <stdio.h>
#include <stdlib.h>
#include "functions.h" //Every function that has been used is declared and defined here

// This is the main function
int main() {
    char selection; bool v=true;
    while (v) {
        display_menu();
        scanf(" %c", &selection);

        switch (selection) {
            case 's':
            case 'S':
                start_game();
                v=false;
                break;
            case 'h':
            case 'H':
                show_high_scores();
                printf("Press any number and Enter to return main menu:");
                int p; scanf("%d",&p);
                break;
            case 't':
            case 'T':
                show_tutorial();
                printf("Press any number and Enter to return main menu:");
                int r; scanf("%d",&r);
                break;
            case 'e':
            case 'E':
                printf("Exiting the game. Goodbye!\n");
                return 0;
            default:
                printf("Invalid selection. Please try again.\n");
                break;
        }
    }
    return 0;
}

