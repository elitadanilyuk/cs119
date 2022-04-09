#ifndef GRADED_ACTIVITY_HPP
#define GRADED_ACTIVITY_HPP

#include <string>
#include <iostream>
using namespace std;

class GradedActivity
{
private:
    // field declaration
	double score;

public:
    //set method
	void setScore(double totalScore);
    // get methods
	double getScore();
	string getGrade();

};
#endif

void GradedActivity::setScore(double totalScore)
{
    score = totalScore;
} // end setScore()

double GradedActivity::getScore()
{
    return score;
} // end getScore()

string GradedActivity::getGrade()
{
    // local variable to method getGrade()
    string grade;
    getScore();
    
    // if statement to determine the letter grade
    if (score >= 90)
        grade = "A";
    else if (score >= 80)
        grade = "B";
    else if (score >= 70)
        grade = "C";
    else if (score >= 60)
        grade = "D";
    else
        grade = "F";
    
    return grade;
} // end getGrade()
