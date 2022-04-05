//
//  Lesson 3 Homework Part 1 BMI Enhancement Danilyuk
//
//  Updated by Elita Danilyuk on 22 June 2020.

#include <iostream>
using namespace std;

// module prototypes
void userInput(int &weight, int &height);
void calculation(int height, int weight, double &BMI);
void output(double BMI);

// global CONSTANTS
const double IMPERIAL = 703;
const double MID_LOW = 18.5;
const double MID_HIGH = 25;

// start main
int main()
{
    // defined variables
    int weight, height;
    double BMI;
    
    // (INPUT) - module call
    userInput(weight, height);
    
    // (PROCESS) - module call
    calculation(height, weight, BMI);
    
    // (OUTPUT) - module call
    output(BMI);
    
    // if statements with BMI message (OUTPUT)
    if ((BMI >= MID_LOW) && (BMI <= MID_HIGH))
    {
        cout << "BMI is in the optimal range: " << MID_LOW << " TO " << MID_HIGH << endl;
    }
    else
    {
        if (BMI < MID_LOW)
        {
            cout << "LOW BMI - watch more TV" << endl;
        }
        else
        {
            if (BMI > MID_HIGH)
            {
                cout << "HIGH BMI - person is too short" << endl;
            }
        }
    }
    
    return 0;
} // end main ()

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
