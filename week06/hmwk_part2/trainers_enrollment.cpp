//
//  Lesson 6 Homework Part 2 Trainer's Enrollment Danilyuk
//
//  Created by Elita Danilyuk on 05 July 2020.

#include <iostream>
using namespace std;

// module prototypes
void intro();
void finalOutput();

// global CONSTANTS
const int SIZE = 25;

// start main()
int main()
{
    // defined local variables
    const int MEMBERS[SIZE] = {3, 9, 13, 26, 23, 19, 15, 13, 17, 8, 2, 3, 5, 7, 11, 18, 12, 14, 20, 16, 4, 6, 10, 1, 0};
    const string TRAINERS[SIZE] = {"Jake Butt", "Ziggy Hood", "Hroniss Grasu", "Vontaze Burfict", "Jaquiski Tartt", "Ndamukong Suh", "Thurston Armbrister", "Captain Munnerlyn", "Barkevious Mingo", "Ha Ha Clinton-Dix", "Mister Alexander", "BenJarvus Green-Ellis", "Richie Incognito", "Champ Bailey", "Captain Munnerlyn", "Mike Kafka", "Ras-I Dowling", "Bryan Anger", "D'Brickashaw Ferguson", "Rex Hadnot", "Sage Rosenfels", "Robert Griffin III", "Sav Rocca", "Chad Ochocinco", "Brett Rypien"};
    int index; //counter variable for arrays
    int countRange1 = 0;
    int membersArrayRange1[SIZE];
    string trainersArrayRange1[SIZE];
    int countRange2 = 0;
    int membersArrayRange2[SIZE];
    string trainersArrayRange2[SIZE];
    int countRange3 = 0;
    int membersArrayRange3[SIZE];
    string trainersArrayRange3[SIZE];
    int countRange4 = 0;
    int membersArrayRange4[SIZE];
    string trainersArrayRange4[SIZE];
    
    // Introduction
    // call intro() prototype
    intro();
    
    // (PROCESS)
    // loop to sort members into arrays
    for (index = 0; index < SIZE; index++){
        if (MEMBERS[index] <= 5) {
        countRange1 = countRange1 + 1;
        membersArrayRange1[countRange1 - 1] = MEMBERS[index];
        trainersArrayRange1[countRange1 - 1] = TRAINERS[index];
        }
        else if ((MEMBERS[index] > 5) && (MEMBERS[index]) <= 12) {
        countRange2 = countRange2 + 1;
        membersArrayRange2[countRange2 - 1] = MEMBERS[index];
        trainersArrayRange2[countRange2 - 1] = TRAINERS[index];
        }
        else if ((MEMBERS[index] > 12) && (MEMBERS[index] <= 20)) {
        countRange3 = countRange3 + 1;
        membersArrayRange3[countRange3 - 1] = MEMBERS[index];
        trainersArrayRange3[countRange3 - 1] = TRAINERS[index];
        }
        else {
        countRange4 = countRange4 +1;
        membersArrayRange4[countRange4 - 1] = MEMBERS[index];
        trainersArrayRange4[countRange4 - 1] = TRAINERS[index];
        }
    }

    // (OUTPUT)
    cout << "0 to 5 - " << countRange1 << " trainers" << endl;
    for (index = 0; index < countRange1; index++){
        cout << trainersArrayRange1[index] << "(" << membersArrayRange1[index] << "), ";
    }
    cout << endl;
    
    cout << "6 to 12 - " << countRange2 << " trainers" << endl;
    for (index = 0; index < countRange2; index++){
        cout << trainersArrayRange2[index] << "(" << membersArrayRange2[index] << "), ";
    }
    cout << endl;
    
    cout << "13 to 20 - " << countRange3 << " trainers" << endl;
    for (index = 0; index < countRange3; index++){
        cout << trainersArrayRange3[index] << "(" << membersArrayRange3[index] << "), ";
    }
    cout << endl;
    
    cout << "...over 20 - " << countRange4 << " trainers" << endl;
    for (index = 0; index < countRange4; index++){
        cout << trainersArrayRange4[index] << "(" << membersArrayRange4[index] << "), ";
    }
    cout << endl;
    
    // call finalOutput() prototype
    finalOutput();
    
    return 0;
} // end main()

// intro module definition
void intro()
{
    cout << "This program grades the trainer's enrollment." << endl;
    cout << "Those who enrolled from..." << endl;
} // end intro()

// finalOutput module definition
void finalOutput()
{
    cout << endl;
    cout << "End of job" << endl;
} // end finalOutput()
