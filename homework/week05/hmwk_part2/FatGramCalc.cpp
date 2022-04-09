//
//  Lesson 5 Homework Part 2 Fat Gram Calculator Danilyuk
//
//  Created by Elita Danilyuk on 28 June 2020.

// module prototypes
void introduction();
void inputFatGrams(int &fatGrams);
void inputCalories(int &calories, int &fatGrams);
void calculation(double &percentage, int &fatGrams, int &calories);

// global CONSTANTS
const int MINIMUM_VALUE = 0.0;
const int FORMULA_CONST = 9.0;

//NO UNNAMED NUMERIC CONSTANTS

#include <iostream>
using namespace std;

// start main()
int main()
{
    // defined local variables
    double percentage;
    int fatGrams, calories;
    
    // Introduction module
    introduction();
    
    // (INPUT)
    inputFatGrams(fatGrams);
    inputCalories(calories, fatGrams);
        
    // (PROCESS)
    calculation(percentage, fatGrams, calories);
    if (percentage > 0.3)
    {
        cout << "The percentage of fat in this food is " << percentage << "%." << endl;
    }
    else
    {
        if (percentage < 0.3)
        {
            cout << "This food is considered low fat because the percentage of fat: " << percentage << "%, is below 30.0%." << endl;
        }
    }
    
    // (OUTPUT)
    
    return 0;
} // end main()

// introduction module definition
void introduction()
{
    cout << "This program calculates the % of calories from fat in a food, and signals when a food is low fat." << endl;
    cout << "When asked..." << endl;
    cout << "enter the number of fat grams and calories in the food." << endl;
} // end intrdocution()

// inputFatGrams module definition
void inputFatGrams(int &fatGrams)
{
    cout << "Enter the number of fat grams (not less than 0.0 grams)" << endl;
    cin >> fatGrams;
    
    // loop until valid input for fatGrams entered
    while (fatGrams < MINIMUM_VALUE)
       {
           cout << "Enter the number of fat grams (not less than 0.0 grams)" << endl;
           cin >> fatGrams;
       }
} // end inputFatGrams()

// inputCalories module definition
void inputCalories(int &calories, int &fatGrams)
{
    cout << "Enter the number of calories (MUST exceed " << (fatGrams * FORMULA_CONST) << " (fat grams X " << FORMULA_CONST << "))" << endl;
    cin >> calories;
    
    // loop until valid input for calories entered
    while (calories < (fatGrams * FORMULA_CONST))
    {
        cout << "Enter the number of calories (MUST exceed " << (fatGrams * FORMULA_CONST) << " (fat grams X " << FORMULA_CONST << "))" << endl;
        cin >> calories;
    } //
} // end inputCalories()

// calculation module definition
void calculation(double &percentage, int &fatGrams, int &calories)
{
    cout << "FatGrams: " << fatGrams << endl;
    cout << "Calories: " << calories << endl;
    percentage = (fatGrams * FORMULA_CONST) / calories;
    cout << "Percentage: " << (percentage * 100) << endl;
} // end calculation()
