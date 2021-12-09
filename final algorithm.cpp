/*
Create a text file called words.txt and include at least 20 English dictionary-based words. (5 points)
The program will read the list of words from the file into an array or vector data structure. (10 points)
Program chooses a random word from the array and starts asking the player to guess the word one character at a time until the player wins or runs out of predefined number of tries. (50 points)
Game continues until the player wants to quit. (10 points)
Include as many "bells and whistles" as possible to make the game entertaining and intuitive to play. (10 points)
Use as many functions as possible to break the problem into many subproblems (5 points)
Use header files and cpp files to break the code into multiple files (5 points) (((*** DO THIS ***)))
Create a Makefile inside the finalproject folder (5 points)

text file with dictionary with predetermined words (message from chris link)
File steam from file to get word
6 opportunities (fails) Less than 7 words most likely

To Get Random Word:
    Length of list
        (probably a function for that)
    Pick random word between 1 and (list length)
    getline(the number that was randomly selected)
MAYBE: have a difficulty change per list? easy med hard?

quitgame() function necessity(probably attached to difficulty when starting game)
    cases apply to this, 


set getline() to a variable(word) that I can manipulate
Find word length (word_length(function for that))
display hangman ascii with spaces for each letter in word (hangedman)
    (tbd)

set word to array

(((In another function)))
(something like this: https://www.geeksforgeeks.org/convert-string-char-array-cpp/)
ask user for input on word (failsafe if not a correct character)
if not alphabet ( OR 4 (including cases into new function)) then error message "whatare you doing lol"
else:
user input into variable(uinp)
use for loop to check if guess (uinp) is in the array (iterate through word_length value of array) this can be in *another file* as a function
    if guess is correct then call to another func(tbd)(tells them its right)
    guess in main file resets after every guess(because it is in diffferent file)
    else give "incorrect" message and iterate through (hangedman) variable







art................................                                                                                             press 1,2,3,4 to play a new easy game, med game, hard game, or quit current game
_ _ _ _ _ _















*/


