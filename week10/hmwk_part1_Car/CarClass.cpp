//
//  Lesson 10 Homework-Car Class Danilyuk
//
//  Created by Elita Danilyuk on 01 August 2020.

#include <iostream>
#include <cstdlib>
#include <string>

// declared car class file
#include "Car.hpp"

using namespace std;

// global CONSTANTS
int const MAXSPEED = 150;

// start main()
int main()
{
    // defined local variables
    int aYearModel;
    string aMake;

    // Introduction && (INPUT)
    cout << "Enter the car model's year: ";
    cin >> aYearModel;
    cout << "Enter the car's make: ";
    cin >> aMake;

    // class variable myCar with inputs from above
    Car myCar(aYearModel, aMake);
    
    // display of car info && introduction continued
    cout << "The model year is " << myCar.getYearModel() << endl;
    cout << "The make is " << myCar.getMake() << endl;
    cout << "The speed is " << myCar.getSpeed() << endl;
    cout << endl;
    cout << "Let's see what it can do!!" << endl;
    cout << "The speed is..." << endl;
    
    // (PROCESS) && (OUTPUT)
    // call accelerate() from car.hpp
    while (myCar.getSpeed() < MAXSPEED) {
        myCar.accelerate();
        // output speed (display getSpeed)
        cout << myCar.getSpeed() << " ";
    }
    cout << endl;
    cout << "STOP! STOP! Let me OUT!" << endl;
    cout << "The speed is..." << endl;
    // call brake() from car.hpp
    while (myCar.getSpeed() > MINSPEED){
        myCar.brake();
        //output speed (display getspeed)
        cout << myCar.getSpeed() << " ";
    }
    cout << endl;
    
    // final output
    cout << "Whew. I'll just walk from here - thanks." << endl;
    
    return 0;
} // end main()
