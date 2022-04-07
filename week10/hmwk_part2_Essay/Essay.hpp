#ifndef ESSAY_H
#define ESSAY_HPP

#include <string>
#include <iostream>

#include "GradedActivity.hpp"


using namespace std;

double totalScore;

class Essay : public GradedActivity
{
private:
    // field declarations
	double grammer;
	double spelling;
    double correctLength;
	double content;

public:
    // Constructor
	Essay(double grammer, double spelling, double correctLength, double content);
    // set methods
	void setGrammer(double aGrammer);
    void setSpelling(double aSpelling);
    void setCorrectLength(double aCorrectLength);
    void setContent(double aContent);
    // get methods
	double getGrammer();
	double getSpelling();
	double getCorrectLength();
	double getContent();
    // mutator
	void displayPoints();

};
#endif

Essay::Essay(double grammer, double spelling, double correctLength, double content)
{
    setGrammer(grammer);
    setSpelling(spelling);
    setCorrectLength(correctLength);
    setContent(content);

    totalScore = grammer + spelling + correctLength + content;
} // end Essay()

void Essay::setGrammer(double aGrammer)
{
    grammer = aGrammer;
} // end setGrammer()

void Essay::setSpelling(double aSpelling)
{
    spelling = aSpelling;
} // end setSpelling

void Essay::setCorrectLength(double aCorrectLength)
{
    correctLength = aCorrectLength;
} // end setCorrectLength()

void Essay::setContent(double aContent)
{
    content = aContent;
} // end setContent()



double Essay::getGrammer()
{
    return grammer;
} // end getGrammer()

double Essay::getSpelling()
{
    return spelling;
} // end getSpelling;

double Essay::getCorrectLength()
{
    return correctLength;
} // end getCorrectLenth()

double Essay::getContent()
{
    return content;
} // end getContent()



void Essay::displayPoints()
{
    cout << "The recorded scores are:" << endl;
    cout << "Grammer: " << getGrammer() << endl;
    cout << "Spelling: " << getSpelling() << endl;
    cout << "Correct Length: " << getCorrectLength() << endl;
    cout << "Content: " << getContent() << endl;
    cout << "Total score: " << totalScore << endl;
} // end displayPoints()
