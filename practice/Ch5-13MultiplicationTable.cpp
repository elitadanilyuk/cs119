/*
 Chapter 5 Programming Exercise: 13 - Multiplication Table
 This solution does not follow the textbook example, but builds a more
   useful table that can be printed out and sent with the kids to school.
 Ray Warren
  5 June 2020 - convert to C++
 22 February 2019 - python
*/


/*
THE PROBLEM
Design a program that uses nested loops to display a multiplication table
for the numbers 1 through 12.  The program's output should look like this:

example output

        1       2       3       4       5       6       7       8       9       10      11      12
        2       4       6       8       10      12      14      16      18      20      22      24
        3       6       9       12      15      18      21      24      27      30      33      36
        4       8       12      16      20      24      28      32      36      40      44      48
        5       10      15      20      25      30      35      40      45      50      55      60
        6       12      18      24      30      36      42      48      54      60      66      72
        7       14      21      28      35      42      49      56      63      70      77      84
        8       16      24      32      40      48      56      64      72      80      88      96
        9       18      27      36      45      54      63      72      81      90      99      108
        10      20      30      40      50      60      70      80      90      100     110     120
        11      22      33      44      55      66      77      88      99      110     121     132
        12      24      36      48      60      72      84      96      108     120     132     144

*/


#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototypes
void doCalculation(int row, int column, int &product);
void outputValue(int tableValue);

// global CONSTANTS
# define the valid range
const int START = 1;  // calculate products starting from this number
const int END   = 12; // end the calculation of products at this number

int main()
{
  //local variables
  int result = 0;

  // output table header
  cout << "Multiplication table from " << START << " to " << END << endl;

  // (INPUT)
  /*
  NOTE: As-is, input is generated in the for loops.
  Alternatively, the START and END values could be collected from the user.
  At that point, this generation of numbers may be considered PROCESS?
  No big deal.  INPUT/PROCESS/OUTPUT is a generalization.  Sometimes where
  one ends and the other starts can be blurred.
  */
  for(int row=START; row <= END; row++) {
     for(int column=START; column <= END; column++) {
        // calculate and display each product until the end of the row
        doCalculation(row, column, result);
        outputValue(result);
        // GRANTED: The last two lines can easily be done in-place with
        //   the function calls.  This is simply done to re-inforce the
        //   use of functions and passing values by reference.
     } // end inner for loop
     cout << endl;  // go to the next line - the row is finished
  } // end outer for loop

  system("Pause");
  return 0;
}  // end main

// (PROCESS)
void doCalculation(int row, int column, int &product)
{
  // calculate the product
  product = row * column;  // return the result in a reference parameter variable
}  // end doCalculation()

// (OUTPUT)
void outputValue(int tableValue)
{
  cout << "\t" << tableValue;
} // end outputValue()
