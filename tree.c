#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
/* create all vars and if there are command line 
args, set the values to the varables. If not, ask 
the user for how many lines they want. modify 
input (command or user) so that the tree is 
accurately printed*/
    int x;
    int y;
    int z;
    FILE *f = NULL;

    if (argc >= 3) {
        f = fopen(argv[2], "w");
    }
    if (argc >= 2) {
        x = atoi(argv[1]);
    }
    else if (argc = 1){
        scanf("%d", &x);
    }

    x -= 3;
    y = x;
/* Prints out all of the white space for the tree 
(terminal and file) */
    for (int i = 0; i <= x; i++) {
        for (int h = y; h > 0; h--) {
            printf("%c", ' ');
            if (f != NULL) {
                fputs(" ", f);
            }
        }
/* Prints out the stars for the tree */
        for (int j = 0; j < ((i*2)-1); j++) {
            printf("%c", '*');
            if (f != NULL) {
                fputs("*", f);
            }
        }
/* prints the new lines for each row of tree */
        printf("%c", '\n');
        if (f != NULL) {
                fputs("\n", f);
            }
        y--;
    }
/* set y to x to get the middle of tree so that 
we can create the tree trunk */
    y = x-1;
    for (int i = 0; i < 3; i++) {
        for (int h = y; h > 0; h--) {
            printf("%c", ' ');
            if (f != NULL) {
                fputs(" ", f);
            }
        }
        printf("%c\n", '*');
        if (f != NULL) {
            fputs("*\n", f);
        }
    }
/* close file and return 0 to end main */
    fclose(f);
    return 0;
}
