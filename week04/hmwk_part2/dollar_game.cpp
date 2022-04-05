//
//  Lesson 4 Homework Part 1 Dollar Game Danilyuk
//
//  Created by Elita Danilyuk on 21 June 2020.

#include <iostream>
using namespace std;

// Function Prototypes
void userInput(int &pennies, int &nickels, int &dimes, int &quarters);
void calcTotal(int &pennies, int &nickels, int &dimes, int &quarters);

// global CONSTANTS
const double PENNIE_VALUE = 0.01;
const double NICKEL_VALUE = 0.05;
const double DIME_VALUE = 0.10;
const double QUARTER_VALUE = 0.25;

// defined global variable
double TOTAL;

// start main()
int main()
{
    // defined local variables
    int pennies, nickels, dimes, quarters;
    
    // (INPUT)
    // function call userInput
    userInput(pennies, nickels, dimes, quarters);

    // (PROCESS)
    // function call calcTotal
    calcTotal(pennies, nickels, dimes, quarters);
    
    // (OUTPUT)
    if (TOTAL == 1.00)
    {
        cout << "CONGRATULATIONS! You entered exactly $" << TOTAL << " worth of coins." << endl;
    }
    else
    {
        if (TOTAL < 1.00)
        {
            cout << "Sorry you only entered $" << TOTAL << " worth of coins." << endl;
        }
        else
        {
            if (TOTAL > 1.00)
            {
                cout << "Sorry you went OVER with $" << TOTAL << " worth of coins." << endl;
            }
        }
    }
    
    return 0;
} // end main()

// userInput module definition
void userInput(int &pennies, int &nickels, int &dimes, int &quarters)
{
    cout << "Enter the number of Pennies: " << endl;
    cin >> pennies;
    cout << "Enter the number of Nickels: " << endl;
    cin >> nickels;
    cout << "Enter the number of Dimes: " << endl;
    cin >> dimes;
    cout << "Enter the number of Quarters: " << endl;
    cin >> quarters;
} // end userInput()

// calcTotal module definition
void calcTotal(int &pennies, int &nickels, int &dimes, int &quarters)
{
    // calculate coin quanties with thier corresponding values
    TOTAL = (pennies * PENNIE_VALUE) + (nickels * NICKEL_VALUE) + (dimes * DIME_VALUE) + (quarters * QUARTER_VALUE);
} // end calcTotal()
