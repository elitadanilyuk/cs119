//
//  Lesson 2 Homework Part 2 Danilyuk
//
//  Created by Elita Danilyuk on 8 June 2020.
//

#include <iostream>
using namespace std;

int main()
{
    // defined variables
    int F, C;
    
    // Introduction
    cout << "Please enter a temperature in Celsius."<< endl;
    
    // (INPUT)
    cin >> C;

    // (PROCESS)
    F = 9.0 / 5.0 * C + 32;

    // (OUTPUT)
    cout << endl;
    cout << "The equivalent temperature in Fehrenheit is: ";
    cout << F;
    
    return 0;
} // end main())
