//
//  Lesson 5 Homework Part 1  Temp. Conversion Table Danilyuk
//
//  Created by Elita Danilyuk on 28 June 2020.

// module prototype
void calculation(double &F, double &C);

// global CONSTANTS
const int MAX_C = 20;
const double F_CALC_1 = (9.0 / 5.0);
const double F_CALC_2 = 32;

#include <iostream>
using namespace std;

// start main()
int main()
{
    // defined local variables
    double F, C;
    
    // Introduction (table heading)
    cout << "Celsius\tFahrenheit" << endl;
        
    // (PROCESS) & (OUTPUT)
    // loop display Temp. Conversion Table 0 through 20
    for (C = 0.0; C <= MAX_C; C++)
    {
        calculation(F, C); //module
        
        cout << C << "\t\t" << F << endl; // (OUTPUT)
    } // end for{}
        
    return 0;
} // end main()

// calculation module definition
void calculation(double &F, double &C)
{
    F = (F_CALC_1 * C) + F_CALC_2;
} // end calculation()
