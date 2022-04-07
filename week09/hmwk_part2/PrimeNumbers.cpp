//
//  Lesson 9 Homework Part 2 Prime Numbers Danilyuk
//
//  Created by Elita Danilyuk on 25 July 2020.

#include <iostream>
using namespace std;

// module prototypes
bool isPrime(int);

// start main()
int main()
{
    // defined local variables
    const int MAX = 100;
    const int COLUMN = 5;
    int number;
    int count = 0;
    bool result;
    
    // Introduction
    cout << "Table of prime numbers from 1 to " << MAX << endl;
    
    // (INPUT) & (PROCESS)
    // for loop to run numbers through MAX
    for (number = 1; number <= MAX; number++){
        // isPrime() method call
        result = isPrime(number);
        // if statement to cout prime numbers
        if (result == true){
            cout << number << " ";
            count++;
            // if statement to place output into rows of 5 aka ROW
            if ((count % COLUMN) == 0)
                cout << endl;
        } // end if
    }
    
    // (OUTPUT)
    cout << endl;
    cout << "Press any key to continue..." << endl; /// I wasn't sure if you wanted this line to take an input to continue, as it wasn't specified in the homework instructions
    
    return 0;
} // end main()

// isPrime module definitions
bool isPrime(int number){
    bool result = true;
    // for loop to find if number is prime
    for (int x = 2; x <= number/2; x++){
        if ((number % x) == 0)
            result = false;
    }
    return result;
} // end isPrime()
