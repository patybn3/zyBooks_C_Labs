//
//  main.c
//  5.36LAB_patriciaantlitz
//
//  Created by Patricia Antlitz on 3/24/21.
//
#include<stdio.h>
#include <string.h>
//function prototypes
int GetNumOfCharacters(const char usrStr[]);
void OutputWithoutWhitespace(const char usrStr[]);

int main(void) {

   /* Type your code here. */
    //initiates a string
   char userStr[1000];
   //asks the user to enter a string
   printf("Enter a sentence or phrase:\n");
    //uses fgets to get entry
   fgets(userStr, 1000, stdin);
   //print the string
   printf("\nYou entered: %s\n", userStr);
    //uses function GetNumOfCharacter to count the characters
   printf("Number of characters: %d\n", GetNumOfCharacters(userStr));
    //uses function Output.. to print the string with no whitespaces
   printf("String with no whitespace: ");
   OutputWithoutWhitespace(userStr);
   
   printf("\n");

   return 0;
}

//Returns the number of characters in usrStr
int GetNumOfCharacters(const char usrStr[]) {
   //initiates variable to loop
   int i;
   i = 0;
   //while usrStr is true
   while (usrStr[i]) {
       //count each character
      i++;
   }
    //return value
//   return i-1; zyBooks is counting \n as a character, in case you dont wanna count \n use return i - 1 instead
    return i;
}
//removes white spaces
void OutputWithoutWhitespace(const char usrStr[]) {
    //initiates variable to loop
   int i;
   i = 0;
    //while usrStr is true
   while (usrStr[i]) {
       //if the character is not empty
      if(usrStr[i] != ' ' && usrStr[i] != '\t') {
          //print one character
         printf("%c", usrStr[i]);
      }
       //continue loop check for next character
      i++;
   }
}
//end.
