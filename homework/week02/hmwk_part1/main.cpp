//
//  Lesson 2 Homework Danilyuk
//
//  Created by Elita Danilyuk on 8 June 2020.
//

#include <iostream>
using namespace std;

int main()
{
    // local variables
    int tip;
    int tax;
    int total;
    int charge;
    
    
    // Introduction
    cout << "Please enter the charge for the food.";

    // (INPUT)
    cin >> charge;

    // (PROCESS)
    tip = charge * 0.15;
    tax = charge * 0.07;
    
    total = charge + tip + tax;
    
    // (OUTPUT)
    cout << endl;
    cout << "tip: $";
    cout << tip;
    cout << endl;
    cout << "tax: $";
    cout << tax;
    cout << endl;
    cout << "total: $";
    cout << total;
        
    return 0;
} //end main
