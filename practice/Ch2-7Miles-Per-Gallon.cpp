/*
 Chapter 2 Programming Exercise: 7
 modified with the addition of fuel cost
 Ray Warren
 2 June 2020 C++
*/

/*
The problem:
A car's miles-per-gallon (MPG) can be calculated with the following formula:
  MPG = Miles driven/Gallons of gas used
Design a program that asks the user for the number of miles driven and the
gallons of gas used.  It should calculate the car's miles-per-gallon and display
the result on the screen.

EXAMPLE OUTPUT:

This program calculates miles-per-gallon (MPG).
Please enter,...

...the miles driven: 100

...the gallons used: 10

That tank-full you got: 10 miles-per-gallon
It cost: $32.4 at $3.24 per gallon

*/

#include <iostream>

using namespace std;

// global CONSTANTS
//   following convention, the names of CONSTANTS are CAPITALIZED
const double FUEL_PRICE = 3.24; // the price of a gallon of fuel
/*
 Don't confuse a programming CONSTANT with a mathematical constant (like PI).
 Programming CONSTANTS are only constant (not changing) while the program
 executes.

 One benefit of CONSTANTS is that a lot of code can be changed very easily.
 In this simple program, FUEL_PRICE is used 3 times. Changing the price is
 very simple. Just change the value of the CONSTANT - done.
 You can "try this at home".  :)

 Think however, what it would take to DISCOVER all the places that fuel price
 (as an unnamed numeric constant) is used in this program.  Scale that to an
 enterprise program.  You may be certain that you found some, but there will
 always be the question: Did I find them all?
 You certainly DON'T WANT YOUR CUSTOMER TO FIND THE ONES YOU MISSED.

 Notice too that FUEL_PRICE is used in both a calculation as well as the user
 messages.  Don't forget the user messages.
 Again, DON'T LET THE CUSTOMER FIND THEM FOR YOU.

 In this course, you will have plenty of opportunity to practice and get
 familiar with the use of CONSTANTS, since ALL your programs will have
 them - otherwise, deducted points.
*/

int main()
{
    // local variables
    double mileDriven = 0;
    double gallonsUsed = 0;
    double theMPG = 0;
    double fuelCost = 0;

    // Introduction
    cout << "This program calculates miles-per-gallon (MPG)." << endl;
    cout << "Please enter,..." << endl;

    //(INPUT)
    // following convention, the names of variables use camelCase
    cout << "\n...the miles driven: ";
    cin >> mileDriven;
    cout << "\n...the gallons used: ";
    cin >> gallonsUsed;

    // (PROCESS)
    theMPG = mileDriven / gallonsUsed;
    fuelCost = theMPG * FUEL_PRICE;

    // (OUTPUT)
    cout << endl;  // output a blank line
    cout << "That tank-full you got: " << theMPG << " miles-per-gallon\n";
    cout << "It cost: $" << fuelCost << " at $"
         << FUEL_PRICE << " per gallon" << endl;

} // end main())



