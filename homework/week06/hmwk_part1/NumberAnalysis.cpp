//
//  Lesson 6 Homework Part 1 Number Analysis Danilyuk
//
//  Created by Elita Danilyuk on 03 July 2020.

#include <iostream>
using namespace std;

// module prototypes
void input(int &index, double numbers[]);
void searchNumbers(int &index, double &min, double &max, double &total, double numbers[]);
void output(double min, double max, double total, double average);

// global CONSTANTS
const int SIZE = 20; //constant array size

//NO UNNAMED NUMERIC CONSTANTS

// start main()
int main()
{
    // defined local variables
    int index;
    double min, max, total, average;
    
    // Introduction
    double numbers[SIZE] = {26, 45, 56, 12, 78, 74, 39, 22, 5, 90, 87, 32, 28, 11, 93, 62, 79, 53, 22, 51};
    
    // (INPUT)
    input(index, numbers);
    
    // (PROCESS)
    searchNumbers(index, min, max, total, numbers);
    average = total / SIZE;
    
    // (OUTPUT)
    output(min, max, total, average);
    
    return 0;
} // end main()

// input module definition
void input(int &index, double numbers[]) {
    cout << "The array was initialized to: " << endl;
    for (int index = 0; index < SIZE; index++) {
        cout << numbers[index] << " ";
    }
    cout << endl;
} // end input()

// searchNumbers module definition
void searchNumbers(int &index, double &min, double &max, double &total, double numbers[]) {
    // assigning of first element in array to be min, max, and total
    min = numbers[0];
    max = numbers[0];
    total = numbers[0];

    // start loop, accessing array values starting with numbers[1]
    for (int index = 1; index < SIZE; index++) {
        // test within loop for minmum and maximum numbers
        if (numbers[index] < min)
            min = numbers[index];
        if (numbers[index] > max)
            max = numbers[index];
        // accumulating total of all numbers
        total = total + numbers[index];
    }
} // end searchNumbesr()

// output module definition
void output(double min, double max, double total, double average) {
    cout << "The lowest number is: " << min << endl;
    cout << "The highest number is: " << max << endl;
    cout << "The total of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
} // end output()
