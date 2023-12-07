#include <stdio.h>
#include <stdlib.h>

// This program will be translating a string into an ASCII text art style

/*

  _________________________________________
 /                                         \
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
|                                           |
 \_________________________________________/




*/

char *getArtStyle() {
    FILE *fstyle;

    if ((fstyle = fopen("./ASCII_artstyle.txt","r")) == NULL){
        printf("Failed opening the ASCII Art Style file.\nCheck");
        exit(1);
    }

    fclose(fstyle);

    return "something";
}