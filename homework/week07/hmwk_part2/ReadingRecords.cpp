//
//  Lesson 7 Homework Part 2 Reading Records Danilyuk
//
//  Created by Elita Danilyuk on 11 July 2020.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// module definition
void output(string name, string score);

// global CONSTANTS
const char DELIMITER = ','; // field delimiter

// start main()
int main()
{
    // defined local variables
    string record, name;
    string score;
    int delimiterPosition;
    int fieldStart;
    
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
        score = record.substr(fieldStart, delimiterPosition-fieldStart);
    
        // (OUTPUT)
        output(name, score);
    }
    
    inputFile.close(); //close inputFile
    return 0;
} // end main()

// module output definition
void output(string name, string score){
    cout << "Player Name: " << name << " Score: " << score << endl;
} // end output()
