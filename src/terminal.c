#include <stdio.h>
#include <stdlib.h>
#include "terminal-portfolio.h"

typedef struct { char *str; int val; } t_symstruct;
static t_symstruct switchString[] = {
    {"help", 1}, {"whoami", 2}, {"projects", 3}, {"aboutme", 4},
    {"socials", 5}, {"contacts", 6},
    {"easter-egg", 97}, {"clear", 98}, {"exit", 99}
};


int main() {
    char *str = getArtStyle();
    printf("%s", str);

    char *cmd;


    switch (tolower(cmd))
    {
    case 1:
        /* code */
        break;
    
    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;

    case 4:
        /* code */
        break;

    case 5:
        /* code */
        break;

    case 6:
        /* code */
        break;

    case 98:    // clear terminal
        clear_Terminal();
        break;

    case 99:    // exit program
        /* code */
        break;

    default:
        printf("Inavalid command. For more information on the available commands type 'help' or type 'exit' instead if you wish to leave this terminal.\n");
        break;
    }
    return 0;
}
