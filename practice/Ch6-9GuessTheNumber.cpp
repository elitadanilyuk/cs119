/*
 Chapter 6 Programming Exercise: 9 - Guess Number
 Ray Warren
 22 February 2019 - python
 19 July 2020 - C++
*/
/*
Guess the Number

Design a guessing program.  The program should generate a random number
and then ask the user to guess the number.  Each time the user enters
his or her guess, the program should indicate whether it was too high or
too low.  The game is over when the user correctly guesses the number.
When the game ends, the program should display the number of guesses
that the user made.

example output:

Guess the number in a range.
The range will be from 1 to the maximum of your choice
Select the upper end of the range: 10, 25, 50, 100
10
What is your guess? (or -99 to QUIT)
12
What is your guess? (or -99 to QUIT)
25
What is your guess? (or -99 to QUIT)
5
too high
What is your guess? (or -99 to QUIT)
1
too low
What is your guess? (or -99 to QUIT)
3
too high
What is your guess? (or -99 to QUIT)
2
YOU GOT IT in 4 tries
Do you want to try again? (y or -99 to QUIT)
-99
Come Back Soon
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdlib>  // for random numbers
#include <ctime>  // for random number seed generation
using namespace std;

// prototype statements
int setPlayLevel();
int computerChoice(int max_range);
int getGuess(int max_range);

// global CONSTANTS
const int QUIT = -99;  // value to quit program

const int START = 1;  // starting value of the range for guesses
// levels of play
const int EASY      = 10;
const int HARD      = 25;
const int MORE_HARD = 50;
const int MOST_HARD = 100;

// global variables to return module results - WILL NO LONGER BE USED

int main()
{
  int guess      = 0;   // user entered trial
  int guessCount = 0;   // track the number of guesses

  int gameLevel = EASY;  // default to EASY game
  int theNumber = 0;     // the number for the user to guess

  string tryAgain = "";  // try to guess another number

  cout << "Guess the number in a range." << endl;
  cout << "The range will be from " << START << " to the maximum of your choice" << endl;

  while (true){

    gameLevel = setPlayLevel();   // let the user determine the difficulty level

    // determine the number
    theNumber = computerChoice(gameLevel);

    while (true){

      guess = getGuess(gameLevel);

      guessCount = guessCount + 1;

      if (guess != QUIT){
        if (guess < theNumber) {
          cout << "too low" << endl;
        } else if (guess > theNumber) {
          cout << "too high" << endl;
        } else {
          cout << "YOU GOT IT in " << guessCount << " tries" << endl;
          guessCount = 0;  // reset the guess count
          break;  // exit loop
        }
      } else if (guess == QUIT){
        break;  // exit loop
      }
    } // end inner while

    // back to outer loop
    if (guess == QUIT){
      break;  // exit the loop and the program
    } else {
      cout << "Do you want to try again? (y or " << QUIT << " to QUIT) " << endl;
      cin >> tryAgain;
      if (!(tryAgain == "y" or tryAgain == "Y")) {
        break;  // exit the whole program
      }
    }

  } // end outer while

  cout << "Come Back Soon" << endl;
} // end main()

int setPlayLevel(){
   int levelChoice = EASY;
   while (true) {
      cout << "Select the upper end of the range: "
           << EASY << ", " << HARD << ", "
           << MORE_HARD << ", " << MOST_HARD << endl;
      cin >> levelChoice;
      if (levelChoice == EASY ||
          levelChoice == HARD ||
          levelChoice == MORE_HARD ||
          levelChoice == MOST_HARD ){
        break;  // exit the loop
      }
   } // end while
   return levelChoice;
}  // end setPlayerLevel()

int computerChoice(int max_range){

  // Create a Random object. This object will
  // provide us with the random numbers.
  // Get the system time.
  unsigned seed = time(0);
  // Seed the random number generator.
  srand(seed);

  // get a random number in the range of 1 through MAX.
  int number = 1 + rand() % max_range;
  return number;
}  // end computerChoice()

int getGuess(int max_range){
  int guess;
  while (true){
     cout << "What is your guess? (or " << QUIT << " to QUIT) " << endl;
     cin >> guess;
     // if the guess is in range, return it
     if ((START <= guess and guess <= max_range) or guess == QUIT)
        return guess;
  }  // end while
}  // end getGuess()
