//
//  main.c
//  5.37or6.38LAB_patriciaantlitz
//
//  Created by Patricia Antlitz on 3/22/21.

#include<stdio.h>
#include <string.h>
#include <ctype.h>
//function prototypes, call future functions to be used
int GetNumOfNonWSCharacters(const char usrStr[]);
int GetNumOfWords(const char words[]);
char* FixCapitalization(char upperC[]);
char* ShortenSpace(char *cutSpace);
char* ReplaceExclamation(char replaceCh[]);
char PrintMenu(char chStr[1000]);

int main(void) {

   /* Type your code here. */
   //initiates a string
   char chStr[1000];

   // printf("Enter a sample text:\n");
   // fgets(chStr, 1000, stdin);

   // printf("You entered: %s",
   //calls main outer function
   PrintMenu(chStr);
   printf("\n");

   return 0;
}


//counts the number of characters excluding white spaces
int GetNumOfNonWSCharacters(const char usrStr[]){
    //initiates a value to be used in the loop that counts all charactes including the spaces
    int i = 0;
    //counts the whitespaces only
    int count = 0;
    //variable to hold new value
    char ch;

    //while usrStr is true
    while (usrStr[i]) {
        //assign value to ch
        ch = usrStr[i];
        //if character is a whitespace
        if(isspace(ch)){
            //count the character
            count++;
        }
        //count all characters
        i++;
    }
    //return character numbers - whitespace number
    return i - count;
}
// counts the total number of words, uses the white space to count
int GetNumOfWords(const char words[]){
    //variables for counting
    int i = 0;
    int count = 0;

    //while word is true
    while(words[i]){
        //if the character is a whitespace
        if(words[i] == ' ' && words[i - 1] != ' '){
            //count the white spaces
            count++;
        }
        //count the charaqcters
        i++;
    }

    //return count
    return count + 1;
}
//this function will turn the first letter of a string and all first letters after a . into a capital letter
char* FixCapitalization(char upperC[]){
    //initiate variable to loop
    int i;
    //for loop checks value of upperC
    for(i = 0; upperC[i] != '\0'; i++) {
        //if i is 0, meaning the very first character in the string
        if(i == 0) {
            //if the character is a letter from a to z
            if((upperC[i]>='a' && upperC[i]<='z')){
              //take character and turn it to uppercase
                upperC[i] = toupper(upperC[i]);
                //continue to next character
                continue; //continue to the loop
            }
        }
        //if the chracter is a space and if the character before the space is a dot
        if(isspace(upperC[i]) && upperC[i - 1] == '.') {
            //while the character is a space
            while (isspace(upperC[i])){
                //add to the character to move to the next
                i++;
                //once the character is a letter from a to z
                if(upperC[i] >= 'a' && upperC[i] <= 'z') {
                  //take character and turn it to uppercase
                  upperC[i] = toupper(upperC[i]);
                  continue; //continue to the loop
                }
            }
            //continue checking
            continue;
        }

//        if((upperC[i] == ' ') && (upperC[i + 1] >= 'a' && upperC[i + 1] <= 'z') ) {
//                //if space is found, check next character
//                //check next character is lowercase alphabet
//
//
//                upperC[i] = toupper(upperC[i]); //subtract 32 to make it capital
//                continue; //continue to the loop
//
//
//        }
        //if anything else
        else {
            // if characters are uppercase
            if(upperC[i]>='A' && upperC[i]<='Z'){
              //if the character is not the first character (keeps the first letter capitalized in case it was already)
                if(i != 0){
                  //turn the characters to lowercase
                    upperC[i] = tolower(upperC[i]);
                }//subtract 32 to make it small/lowercase
            }
        }
    }
    //return the string
    return upperC;
}
//removes extra space between words
char* ShortenSpace(char cutSpace[]){
    //variables for loop
    int i;
    int x;
    //loops the variables and the string
    for (i = x = 0; cutSpace[i]; ++i)
    //checks if is not a space
      if (!isspace(cutSpace[i]) || (i > 0 && !isspace(cutSpace[i - 1])))
        //removes the space
          cutSpace[x++] = cutSpace[i];
          cutSpace[x] = '\0';
          //returns the string
      return cutSpace;
}
//replaces ! point
char* ReplaceExclamation(char replaceCh[]){
  //variable for looping
    int i;
    //set variable's value to 0
    i = 0;
    //while replaceCh is true
    while(replaceCh[i]){
      //if the character of replaceCh is !
        if(replaceCh[i] == '!'){
          //replace the character for a dot
            replaceCh[i] = '.';
        }
        //continue to loop
        i++;
    }
    //return the string
    return replaceCh;
}
//function PrintMenu makes all calls
char PrintMenu(char chStr[1000]) {
  //starts a variable for the letters
  char letters = '\0';
  //asks the user for a text
  printf("Enter a sample text:\n");
  //using fgets instead of scanf will allow to loop characters
  fgets(chStr, 1000, stdin);
  //print what user entered
  printf("\nYou entered: %s", chStr);
  printf("\n");

  //while chStr is true
  while(chStr) {
    //print the menu
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");
    //ask the user to pick a letter
    printf("Choose an option:");
    scanf(" %c", &letters);
    //if the user picks letter c
      if(letters == 'c') {
        //user function GetNumOfNonWSCharacters to print the total number of characters without counting the space
          printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(chStr));
          printf("\n");
          //continue looping
          continue;
      }
      //if the user enters w
      else if(letters == 'w') {
        //use function GetNumOfWords to print the total number of words
          printf("Number of words: %d\n", GetNumOfWords(chStr));
          printf("\n");
          continue;
      }
      //the the user types r
      else if(letters == 'r') {
        //uses function ReplaceExclamation to replace ! for a dot
          printf("Edited text: %s\n", ReplaceExclamation(chStr));
          continue;
      }
      //if the user enters s
      else if(letters == 's') {
        //calls function ShortenSpace to remove extra spaces
          printf("Edited text: %s\n", ShortenSpace(chStr));
          continue;
      }
      //if the user enters f
      else if(letters == 'f') {
        //calls function FixCapitalization to capitalize
          printf("Edited text: %s\n", FixCapitalization(chStr));
          continue;
      }
      //if the user types q
      else if(letters == 'q') {
        //quit the program
         break;
      }
      //if the user types anything else
      else {
        //tells the user the entry is invalid
         printf("Invalid choice!!\n\n");
         //continues to loop, will ask the user to enter again
         continue;
      }
   }
   //return the letters
    return letters;
}
