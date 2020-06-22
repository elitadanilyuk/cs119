// Chapter 4 Programming Exercise: 1
// Ray Warren
// 4 June 2020 - convert to C++
// 22 February 2019 - python

/*
THE PROBLEM
Design a program that prompts the user to enter a number within the range
of 1 through 10.  The program should display the Roman numeral version of
that number.  If the number is outside the range of 1 through 10, the
program should display an error message.

example output
I'll convert a number to its Roman numeral equivalent.
Enter a number between 1 and 10: 6

The Roman numeral for 6 is VI

example error output
I'll convert a number to its Roman numeral equivalent.
Enter a number between 1 and 10: 11
11 is invalid input.
*/


#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototypes
void getInput(int &number);
void convertToRoman(int input, string &theRomanNumeral, bool &wasConverted);

// global CONSTANTS
// numeric constants whose names are Roman Numeral
const int I    = 1;
const int II   = 2;
const int III  = 3;
const int IV   = 4;
const int V    = 5;
const int VI   = 6;
const int VII  = 7;
const int VIII = 8;
const int IX   = 9;
const int X    = 10;

// Roman Numberal string constants
const string STR_I     = "I";
const string STR_II    = "II";
const string STR_III   = "III";
const string STR_IV    = "IV";
const string STR_V     = "V";
const string STR_VI    = "VI";
const string STR_VII   = "VII";
const string STR_VIII  = "VIII";
const string STR_IX    = "IX";
const string STR_X     = "X";

# define the valid range - always let the user know
const int MIN  = 1;
const int MAX  = 10;




int main()
{
  // global variables to return module results
  int number             = 0;    // the user provided number to convert to Roman numerals
  string theRomanNumeral = "";   // the resulting Roman numeral
  bool wasConverted      = true; // boolean type - did the conversion happen?

  // (INPUT)
  getInput(number);  // get the user's input

  // (PROCESS)
  convertToRoman(number, theRomanNumeral, wasConverted);  // convert the number to its Roman numeral equivalent

  // (OUTPUT)
  if (wasConverted == true)
  {
     cout << "\nThe Roman numeral for " << number
          << " is " << theRomanNumeral << endl;
     // \n == escape, n, OR print a new line like the
     //   old manual typewriters that did a carriage return and line feed
  }

  system("Pause");
  return 0;
}  // end main

// get the user's input
void getInput(int &number)
{
  cout << "I\'ll convert a number to its Roman numeral equivalent." << endl;
  // \ is the escape character, used here to allow ' to be used in a string
  cout << "Enter a number between " << MIN << " and " << MAX << ": ";
  // the input cursor remains at the end of the sentence
  cin >> number; // get the user's entry
  // setting number, returns the variable value
} // end getInput()

// calculate the total value
void convertToRoman(int input, string &theRomanNumeral, bool &wasConverted)
{
  // Test if the user input is in range
  // MIN <= input <= MAX converted to code is,...
  if (MIN <= input and input <= MAX)
  {
    // convert
    if (input == I){
      theRomanNumeral = STR_I;
    } else if (input == II) {
      theRomanNumeral = STR_II;
    } else if (input == III){
      theRomanNumeral = STR_III;
    } else if (input == IV){
      theRomanNumeral = STR_IV;
    } else if (input == V){
      theRomanNumeral = STR_V;
    } else if (input == VI){
      theRomanNumeral = STR_VI;
    } else if (input == VII){
      theRomanNumeral = STR_VII;
    } else if (input == VIII){
      theRomanNumeral = STR_VIII;
    } else if (input == IX){
      theRomanNumeral = STR_IX;
    } else if (input == X){
      theRomanNumeral = STR_X;
    }
  }
  else
  {
    // the user entered number is out of range
    wasConverted = false; // make note of this for the program
    cout << input << " is invalid input." << endl;  // let the user know
  }

} // end convertToRoman()



