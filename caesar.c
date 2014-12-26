/*
 * =====================================================================================
 *
 *       Filename:  caesar.c
 *
 *    Description:  Encrypts messages using Caesar's cipher. Caesars cipher encryption 
 *    technique in which a letter is replaced by another letter some fixed number of
 *    positions down the alphabet.
 *    
 *        Version:  1.0
 *        Created:  09/20/2014 13:24:41
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

void cipher(char* plntext, int prompt_number, char* ciphertext);

int main (int argc, char *argv[])
{
    //INITIALIZING VARIABLES
    int prompt_number;
    char *plntext;
    char ciphertext [BUF_SIZE];


    //COMMAND LINE ARGUMENT INPUT
    //ERROR CHECKING
    if (argc != 2) {
        printf("Not enought arguments!");
        return 1; 
    }

    //CORRECT AMOUNT OF ARGUMENTS SO CONVERT STRING INTO INT
    //CHECK IF IT IS A DIGIT
    else {

        if (atoi(argv[1]) == 0) {
            printf("You need to enter consecutive digits.\n");
            return 1; 
        }
        //IF Digit is True then digiTest is Prompt_number to be used to shift Chars in plnText

        else {
            prompt_number = atoi(argv[1]);


        }
    }


    //PLAINTEXT PROMPT
    printf ("Enter Plaintext:");
    plntext = getString();


    //Loop through the array of characters so that we manipulate them
    cipher(plntext, prompt_number, ciphertext);

    //DISPLAY CIPHER OUTPUT TO THE USER
    printf("Ciphertext: %s \n", ciphertext);


    return 0;
}

void cipher(char* plntext, int prompt_number, char* ciphertext){ 
    int len, i, UpalphaTest, LowalphaTest, SpacesTest;
    //Get the length of the string so that we can check each character
    len = strlen(plntext);

    for (i = 0; i < len; i++) {
        //Classify each element in the array of character
        UpalphaTest = isupper(plntext[i]);
        LowalphaTest = islower(plntext[i]);
        SpacesTest = isspace(plntext[i]);


        //Check each character element to see if it returned True for the
        //classification tests. Depending on the character (i.e. Uppercase or Lowercase)
        //shift it over the correct amount of spaces from the ASCII value of 'A' or 'a'
        if (UpalphaTest == 1) {

            ciphertext[i] = 'A' + ((plntext[i] - 'A' + prompt_number) % 26);

        }
        else if (LowalphaTest == 1) {
            ciphertext[i] = 'a' + ((plntext[i] - 'a' + prompt_number) % 26);
        }

        else if (SpacesTest == 1) {
            ciphertext[i] = 32;
        }

        else {
            ciphertext[i] = plntext[i]; }


    }
}

