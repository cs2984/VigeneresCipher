/*
 * =====================================================================================
 *
 *       Filename:  oldman.c
 *
 *    Description:  program will print the "This Old Man" song and will 
 *    insert the remaining verses in the song
 *
 *        Version:  1.0
 *        Created:  09/18/2014 12:57:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  CARRIE SUTHERLAND (), cs2984@nyu.edu
 *   Organization:  C PROGRAMMING FOR MUSICAL APPLICATIONS
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>


int main ()

{
    //INITIALIZING VARIABLES
        int i;
        char *verses_array [10] = { "on my thumb", "on my shoe","on my tree",
            "on my door", "on my hive", "on my sticks", "up in heaven", "on my gate", 
            "on my spine", "on my hen" };

    //CREATE FOR LOOP THAT WILL ITERATE THROUGH THE ARRAY AND PRINT OUT CORRECT VERSE AND 
    //THEN INCREASE TO THE NEXT ELEMENT OF THE ARRAY
for (i = 0; i < 10; i++) {
    printf("This old man, he played %i,\nHe played knick-knack %s; \nWith a knick-kack paddy-whack, give a dog a bone, \nThis old man came rolling home.\n\n", i + 1, verses_array[i]); 

}


return 0;
}
