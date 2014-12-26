/*
 * =====================================================================================
 *
 *       Filename:  vigenere.c
 *
 *    Description:  Encrypts message using Vigeneres cipher. This cipher uses Caesar 
 *    cipher with a different shift that is based on a repeating keyword
 *
 *        Version:  1.0
 *        Created:  09/22/2014 15:05:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  CARRIE SUTHERLAND (), cs2984@nyu.edu
 *   Organization:  C PROGRAMMING FOR MUSICAL APPLICATIONS
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h> 
#include <stdbool.h>
#include <string.h>
#include "inputlib.h" 
#include <ctype.h> 
#define BUF_SIZE 80 

int main (int argc, char *argv[])
{

//INITIALIZING VARIABLES
int i, k, len, len2, UpalphaTest, LowalphaTest, SpacesTest;
char *prompt_text;
char *plntext;
char ciphertext [BUF_SIZE];

//COMMAND LINE ARGUMENT INPUT
//ERROR CHECKING
if (argc != 2) {
    printf("Not enought arguments!");
    return 1; 
}

else {
   
    if (atoi(argv[1]) == 0) {
            prompt_text = (argv[1]);

               }
   //IF Digit is True then digiTest is Prompt_number to be used to shift Chars in plnText

   else {
         printf("You need a single keyword.\n");
            return 1; 
   }
}
//PLAINTEXT PROMPT
    printf ("Enter Plaintext:");
    plntext = getString();

//Get the length of the string so that we can check each character
    len = strlen(plntext);
    len2 = strlen(prompt_text);
    k = 0; 


    for (i = 0; i <len; i++){
    
        //Classify each element in the array of character
        UpalphaTest = isupper(plntext[i]);
        LowalphaTest = islower(plntext[i]);
        SpacesTest = isspace(plntext[i]);

        if (UpalphaTest == 1) {
            ciphertext[i] = (char)('A' + ((int)plntext[i] - 'A' + toupper((int)prompt_text[k%len2]) - 'A') % 26); 
            k++; 
        }

         else if (LowalphaTest == 1) { 
             ciphertext[i] = (char) ('a' + ((int)plntext[i] - 'a' + tolower((int)prompt_text[k%len2])-'a')% 26);
            k++;
        }
        else if (SpacesTest == 1) {
            ciphertext[i] = 32;
        }

        else {
            ciphertext[i] = plntext[i]; }

    }
//DISPLAY CIPHER OUTPUT TO THE USER
printf("Ciphertext: %s \n", ciphertext);

   
return 0;
}
