//
//  Lesson 7 Homework Part 1 Golf Club Input Danilyuk
//
//  Created by Elita Danilyuk on 11 July 2020.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// module prototypes
void input(string &score, ofstream &outputFile, string &checker);

// global CONSTANTS
// field delimiter
const char DELIMITER = ',';

// start main()
int main()
{
    // defined local variables
    string checker, score;
    
    // Introduction
    // open file named golf.txt
    ofstream outputFile;
    outputFile.open("golf.txt");
    
    // (INPUT) & (PROCESS)
    checker = "y";
    while (checker == "y"){
        input(score, outputFile, checker);
    }
    
    // (OUTPUT)
    outputFile.close(); //close outputfile("golf.txt")
    cout << "Records written to golf.txt." << endl;
    
    return 0;
} // end main()

// input module definitions
void input(string &score, ofstream &outputFile, string &checker){
    // get the player name
    string name;
    cout << "Enter a player's name:" << endl;
    getline(cin, name);
    
    // get the player score
    cout << "Enter the player's score:" << endl;
    cin >> score;
    
    // writing the record to golf.txt
    outputFile << name << DELIMITER;
    outputFile << score << endl;
    
    // continue checker
    cout << "Do you want to enter another record?" << endl;
    cout << "Enter y for yes or anything else for no:" << endl;
    cin >> checker;
    
    // cout blank line
    cout << endl;
    
    // resetting and flushing input stream
    fflush(stdin);
}
// end input()
