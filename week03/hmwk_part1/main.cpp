//
//  Lesson 4 Homework Part 2 BMI Danilyuk
//
//  Created by Elita Danilyuk on 21 June 2020.

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void userInput(int &weight, int &height);
void calculation(int height, int weight, double &BMI);
void output(double BMI);

// global CONSTANTS
const double IMPERIAL = 703;
const int MID_LOW = 18.5;
const int MID_HIGH = 25;

// start main
int main()
{
    // defined variables
    int weight, height;
    double BMI;
    string BMI_Range;
    // defined constant variables
    const string OPTIMAL;
    const string UNDERWEIGHT;
    const string OVERWEIGHT;
    
    // (INPUT)
    // module call userInput
    userInput(weight, height);
    
    // (PROCESS)
    // module call calculation
    calculation(height, weight, BMI);
    
    // (OUTPUT)
    // module call output
    output(BMI);
    //
    if ((BMI >= MID_LOW) || (BMI <= MID_HIGH))
    {
        cout << "BMI is in the optimal range: " << MID_LOW << "TO" << MID_HIGH << "." << endl;
    }
    else
    {
        if (BMI < MID_LOW)
        {
            cout << "LOW BMI: Less than " << MID_LOW << "." << endl;
        }
        else
        {
            if (BMI > MID_HIGH)
            {
                cout << "HIGH BMI: Higher than " << MID_HIGH << "." <<endl;
            }
        }
    }
    
    return 0;
} // end main()

// userInput module definition
void userInput(int &weight, int &height)
{
    cout << "Enter a weight in lbs."<<endl;
    cin >> weight;
    cout << "Enter a height in inches."<<endl;
    cin >> height;
} // end userInput()

// calculation module definition
void calculation(int height, int weight, double &BMI)
{
    BMI = (weight * IMPERIAL) / (height * height);
} // end calcuation()

// output module definition
void output(double BMI)
{
    cout << "Body Mass Index: " << BMI <<endl;
} // end output()
