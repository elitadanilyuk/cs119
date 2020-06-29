// Chapter 7 Programming Exercise: 1
// Ray Warren
// 25 May 2013

/*
Design a program that prompts the user to enter an employee's hourly pay
rate and the number of hours worked.  Validate the user's input so that only
pay rates in the range of $7.50 through $18.25 and hours in the range 0 through
40 are accepted.  The program should display the employee's gross pay.

example output:
Enter the pay rate (between 7.5 AND 18.25):
7
Enter the pay rate (between 7.5 AND 18.25):
18.5
Enter the pay rate (between 7.5 AND 18.25):
18.25
Enter hours (between 0.0 AND 40.0):
41
Enter hours (between 0.0 AND 40.0):
40
Gross Pay is: $730.0

*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototypes
// validation modules
void getPayRate(double &payRate);  // validate the user entered pay rate
void getHoursWorked(double &hoursWorked);  // validate user entered hours

void calcGrossPay(double myRate, double myHours, double &grossPay);

const double MIN_WAGE =  7.50; // lower end of wage range
const double MAX_WAGE = 18.25; // upper end of wage range
const double MIN_HOURS = 0.0; // lower end of hours range
const double MAX_HOURS = 40.0; // upper end of hours range

int main()
{
  double payRate = 0.0;  // the user supplied pay rate
  double hours = 0.0;  // the user supplied hours worked
  double grossPay = 0.0; // calculated gross pay

  // get the pay rate from the user
  getPayRate(payRate);

  // get the hours worked from the user
  getHoursWorked(hours);

  // calculate the pay
  calcGrossPay(payRate, hours, grossPay);

  cout << "Gross Pay is: $" << grossPay << endl;

  system("Pause");
  return 0;
}  // end main

void getPayRate(double &payRate){
  // priming read prompt for pay rate
  cout << "Enter the pay rate (between " << MIN_WAGE << " AND " << MAX_WAGE << "): " << endl;
  cin >> payRate;
  // loop until valid input is entered.
  while (payRate < MIN_WAGE || payRate > MAX_WAGE)
  {
    cout << "Enter the pay rate (between " << MIN_WAGE << " AND " << MAX_WAGE << "): " << endl;
    cin >> payRate;
  }  // end while
}  // end getPayRate()

void getHoursWorked(double &hoursWorked){
  // priming read prompt for pay rate
  cout << "Enter hours (between " << MIN_HOURS << " AND " << MAX_HOURS << "): " << endl;
  cin >> hoursWorked;
  // loop until valid input is entered.
  while (hoursWorked < MIN_HOURS || hoursWorked > MAX_HOURS)
  {
    cout << "Enter hours (between " << MIN_HOURS << " AND " << MAX_HOURS << "): " << endl;
    cin >> hoursWorked;
  }  // end while
}  // end getHoursWorked()

void calcGrossPay(double myRate, double myHours, double &grossPay)
{
  // calculate and return the gross pay
  grossPay = myRate * myHours;
} // end calcGrossPay

