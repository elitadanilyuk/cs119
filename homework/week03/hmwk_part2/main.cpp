//
//  Lesson 3 Homework Part 2 Danilyuk
//
//  Created by Elita Danilyuk on 14 June 2020.

#include <iostream>
using namespace std;

// module prototypes
void inputSquareFeet(double &squareFeet);
void inputPrice(double &price);
void process(double &gallon, double &hours, double &labor);
void processAndOutput(double &totalCost, double &labor, double &gallon, double &hours);


// global variable definitions
double squareFeet, price;

// CONSTANTS
const double HOURLY_RATE = 20.00;
const double SQUARE_FEET_PARAMETER = 115;
const double HOURS_PARAMETER = 8;

// start main
int main()
{
    // define variables
    double gallon, hours, labor, totalCost;
    
    // (INPUT) - module call
    inputSquareFeet(squareFeet);
    inputPrice(price);
    
    // (PROCESS) - module call
    process(gallon, hours, labor);
    
    // (PROCESS & OUTPUT) - module call
    processAndOutput(totalCost, labor, gallon, hours);
    
    return 0;
} // end main ()


// inputSquareFeet module definition
void inputSquareFeet(double &squareFeet)
{
    cout << "Enter the number of square feet to paint." <<endl;
    cin >> squareFeet;
} // end inputSquareFeet()

// inputPrice module definition
void inputPrice(double &gallon)
{
    cout << "Enter the price of a gallon of paint." <<endl;
    cin >> price;
} // end inputPrice()

// process module definition
void process(double &gallon, double &hours, double &labor)
{
    gallon = squareFeet / SQUARE_FEET_PARAMETER;
    hours = HOURS_PARAMETER * (squareFeet / SQUARE_FEET_PARAMETER);
    labor = HOURLY_RATE * hours;
} // end process()

// processAndOutput module definition
void processAndOutput(double &totalCost, double &labor, double &gallon, double &hours)
{
    totalCost = price + labor;
    cout << "number of gallons: " << gallon <<endl;
    cout << "number of hours: " << hours <<endl;
    cout << "paint: $" << price <<endl;
    cout << "labor: $" << labor <<endl;
    cout << "total cost: $" << totalCost <<endl;
} // end processAndOutput()
