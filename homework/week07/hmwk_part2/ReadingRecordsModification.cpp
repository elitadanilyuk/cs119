//
//  Lesson 7 Homework Part 2 Reading Records Danilyuk
//
//  Created by Elita Danilyuk on 11 July 2020.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// module definition
void output(string name, int score);
void finalOutput(string bestPlayer);

// global CONSTANTS
const char DELIMITER = ','; // field delimiter

// start main()
int main()
{
    // defined local variables
    string record, name, bestPlayer;
    int bestScore;
    int delimiterPosition;
    int score;
    int fieldStart;
    bool firstLine = true; // flag
    
    // Introduction & open input file
    ifstream inputFile;
    inputFile.open("golf.txt");
        
    // (PROCESS)
    while (getline(inputFile, record)){
        delimiterPosition = 0;
        fieldStart = 0;
        
        delimiterPosition = record.find(DELIMITER, fieldStart);
        name = record.substr(fieldStart, delimiterPosition-fieldStart);
        
        fieldStart = delimiterPosition + 1;
        delimiterPosition = record.find(DELIMITER, fieldStart);
        score = stoi(record.substr(fieldStart, delimiterPosition-fieldStart)); //used stoi method to compare scores as integers
    
        // (OUTPUT)
        // call output module
        output(name, score);
        
        // on first loop set initial value
        if (firstLine){
            bestScore = score;
            bestPlayer = name;
            firstLine = false;
        }
        // compare new scores to see if less than previous bestScore
        else if (score < bestScore){
            bestScore = score;
            bestPlayer = name;
        }
    }
    
    // call finalOutput module
    finalOutput(bestPlayer);
    
    inputFile.close(); //close inputFile
    return 0;
} // end main()

// module output definition
void output(string name, int score){
    cout << "Player Name: " << name << " Score: " << score << endl;
} // end output()

// module finalOutput definition
void finalOutput(string bestPlayer){
    cout << endl; // print blank line
    cout << "The player with the best score is " << bestPlayer << endl;
} // end finalOutput()
