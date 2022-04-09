//
//  Lesson 9 Homework Part 1 Falling Distance Danilyuk
//
//  Created by Elita Danilyuk on 25 July 2020.

#include <iostream>
#include <iomanip>
using namespace std;

// module prototypes
double fallingDistance(double);

// global CONSTANTS
const double G = 9.8;

// start main()
int main()
{
    // defined local variables
    double time, distance;
    const double MIN = 1.0;
    const double MAX = 10.0;
    
    // Introduction
    cout << "Seconds\t\t" << "Meters" << endl;
    cout << setprecision(1) << fixed; //method to set a decimal pooint to go to the nearest tenth
        
    // (PROCESS) & (OUTPUT)
    // for loop to pass seconds 1-10 and output time in seconds and distance in meters
    for (time = MIN; time <= MAX; time++){
        distance = fallingDistance(time);
        // if statment for formatting column distances
        if (time < MAX)
            cout << time << "\t\t\t" << distance << endl;
        else
            cout << time << "\t\t" << distance << endl;
    } // end for loop
        
    return 0;
} // end main()

// fallingDistance module definitions
double fallingDistance(double time){
    // declaring fallingDistance variables
    double distance;
    // formula to determine distance, got incorrect output using 1/2
    distance = 0.5 * G * (time * time);
    return distance;
} // end fallingDistance()
