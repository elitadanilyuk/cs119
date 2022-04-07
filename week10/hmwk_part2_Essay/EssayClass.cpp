//
//  Lesson 10 Homework-Essay Class Danilyuk
//
//  Created by Elita Danilyuk on 02 August 2020.

#include <string>
#include <iostream>

#include "Essay.hpp"

using namespace std;

// module prototypes
void grammerInput(double &grammer);
void spellingInput(double &spelling);
void correctLengthInput(double &correctLength);
void contentInput(double &content);

// global CONSTANTS

//NO UNNAMED NUMERIC CONSTANTS

// start main()
int main()
{
    // defined local variables
    double grammer;
    double spelling;
    double correctLength;
    double content;
    
    // Introduction
    cout << "Enter the grades for an Essay." << endl;
    cout << endl;
    
    // (INPUT) && (PROCESS)
    grammerInput(grammer);
    if (grammer > 30)
        grammerInput(grammer);
    
    spellingInput(spelling);
    if (spelling > 20)
        spellingInput(spelling);
    
    correctLengthInput(correctLength);
    if (correctLength > 20)
        correctLengthInput(correctLength);
    
    contentInput(content);
    if (content > 30){
        contentInput(content);
    }
    
    Essay myEssay(grammer, spelling, correctLength, content);
    
    // (OUTPUT)
    cout << endl;
    myEssay.displayPoints();
    cout << endl;
    // setting score for GradedActivity.hpp
    myEssay.setScore(totalScore);
    // final output of letter grade
    cout << "The grade for this essay is " << myEssay.getGrade() << endl;
    cout << endl;
    
    return 0;
} // end main()

void grammerInput(double &grammer){
    cout << "Grammer (must be 30 or less):" << endl;
    cin >> grammer;
} // end grammerInput()

void spellingInput(double &spelling){
    cout << "Spelling (must be 20 or less):" << endl;
    cin >> spelling;
} // end spellingInput()

void correctLengthInput(double &correctLength){
    cout << "Correct Length (must be 20 or less):" << endl;
    cin >> correctLength;
} // end correctLengthInput()

void contentInput(double &content){
    cout << "Content (must be 30 or less):" << endl;
    cin >> content;
} // end contentInput()
