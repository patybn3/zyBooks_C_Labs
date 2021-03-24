# 5.37 LAB: Program: Authoring assistant

### Code developed by Patricia Antlitz as C training for zyBook labs.

(1) Prompt the user to enter a string of their choosing. Store the text in a string. Output the string. (1 pt)

Ex:

`Enter a sample text:`
`we'll continue our quest in space.  there will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  nothing ends here;  our hopes and our journeys continue!`
``
`You entered: we'll continue our quest in space.  there will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  nothing ends here;  our hopes and our journeys continue!`

(2) Implement a PrintMenu() function, which has a string as a parameter, outputs a menu of user options for analyzing/editing the string, and returns the user's entered menu option. Each option is represented by a single character.

If an invalid character is entered, continue to prompt for a valid choice. Hint: Implement Quit before implementing other options. Call PrintMenu() in the main() function. Continue to call PrintMenu() until the user enters q to Quit. (3 pts)

Ex:

`MENU`
`c - Number of non-whitespace characters`
`w - Number of words`
`f - Fix capitalization`
`r - Replace all !'s`
`s - Shorten spaces`
`q - Quit`

`Choose an option:`

(3) Implement the GetNumOfNonWSCharacters() function. GetNumOfNonWSCharacters() has a constant string as a parameter and returns the number of characters in the string, excluding all whitespace. Hint: Using fgets() to read input will cause your string to have a newline character at the end. The newline character should not be counted by GetNumOfNonWSCharacters(). Call GetNumOfNonWSCharacters() in the PrintMenu() function. (4 pts)

Ex:

`Number of non-whitespace characters: 181`

(4) Implement the GetNumOfWords() function. GetNumOfWords() has a constant string as a parameter and returns the number of words in the string. Hint: Words end when a space is reached except for the last word in a sentence. Call GetNumOfWords() in the PrintMenu() function. (3 pts)

Ex:

`Number of words: 35`

(5) Implement the FixCapitalization() function. FixCapitalization() has a string parameter and updates the string by replacing lowercase letters at the beginning of sentences with uppercase letters. FixCapitalization() DOES NOT output the string. Call FixCapitalization() in the PrintMenu() function, and then output the edited string. (3 pts)

Ex:

`Edited text: We'll continue our quest in space.  There will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  Nothing ends here;  our hopes and our journeys continue!`

(6) Implement the ReplaceExclamation() function. ReplaceExclamation() has a string parameter and updates the string by replacing each '!' character in the string with a '.' character. ReplaceExclamation() DOES NOT output the string. Call ReplaceExclamation() in the PrintMenu() function, and then output the edited string. (3 pts)

Ex.

`Edited text: we'll continue our quest in space.  there will be more shuttle flights and more shuttle crews and,  yes,  more volunteers, more civilians,  more teachers in space.  nothing ends here;  our hopes and our journeys continue.`

(7) Implement the ShortenSpace() function. ShortenSpace() has a string parameter and updates the string by replacing all sequences of 2 or more spaces with a single space. ShortenSpace() DOES NOT output the string. Call ShortenSpace() in the PrintMenu() function, and then output the edited string. (3 pt)

Ex:

`Edited text: we'll continue our quest in space. there will be more shuttle flights and more shuttle crews and, yes, more volunteers, more civilians, more teachers in space. nothing ends here; our hopes and our journeys continue!`
