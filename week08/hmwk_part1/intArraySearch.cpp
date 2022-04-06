//
//  Lesson 8 Homework 7 Part 1 Searching Benchmarks (integer array search) Danilyuk
//
//  Created by Elita Danilyuk on 19 July 2020.

#include <iostream>
#include <string>
using namespace std;

// module prototypes
void initialOutput();
void outputBubble(int bubbles[], int &x);
void bubbleSort(int bubbles[], int &countBubble, int x, int &temp);
void sequentialSearch(bool foundIt, int bubbles[], int userInput, int x, int &position);
void numberPosition(int position);
void binarySearch(bool foundIt, int bubbles[], int userInput);

// global CONSTANTS
const int SIZE = 20;

// start main()
int main()
{
    // defined local variables
    int bubbles[SIZE] = {26, 45, 56, 12, 78, 74, 39, 22, 5, 90, 87, 32, 28, 11, 93, 62, 79, 53, 22, 51};
    int x, temp, position, countBubble, userInput;
    bool foundIt = false; // flag
    string searchAgain = "y";
    
    // introduction
    initialOutput();
    outputBubble(bubbles, x);
    cout << "Bubble Sorted:" << endl;
    bubbleSort(bubbles, countBubble, x, temp);
    outputBubble(bubbles, x);
    cout << "Number of location swaps: " << countBubble << endl;
    
    // (PROCESS) & (OUTPUT)
    while (searchAgain == "y" || searchAgain == "Y"){
        cout << "Select a number in the Array to search for: ";
        cin >> userInput;
        sequentialSearch(foundIt, bubbles, userInput, x, position);
        numberPosition(position);
        binarySearch(foundIt, bubbles, userInput);
        numberPosition(position);
        cout << "Do you want to search again? (Y=Yes) ";
        cin >> searchAgain;
    }

    return 0;
} // end main()

// initialOutput module definition
void initialOutput(){
    cout << "Original Order:" << endl;
} // end initialOutput()

// outputBubble module definition
void outputBubble(int bubbles[], int &x){
    for (x = 0; x < SIZE; x++)
        cout << bubbles[x] << " ";
    cout << endl;
} // end outputBubble module definition

// bubbleSort module definition
void bubbleSort(int bubbles[], int &countBubble, int x, int &temp){
    //bubbleSort() definitions & initializations
    int maxElement; // definition for last element to compare
    countBubble = 0;
    
    // begin bubble sort method
    for (maxElement = SIZE - 1; maxElement >= 0; maxElement--){
        for (x = 0; x <= maxElement - 1; x++){
            if (bubbles[x] > bubbles[x + 1]){
                temp = bubbles[x];
                bubbles[x] = bubbles[x + 1];
                bubbles[x + 1] = temp;
                
                countBubble++;
            } // end if
        }
    }
} // end bubbleSort()

// sequentialSearch module definition
void sequentialSearch(bool foundIt, int bubbles[], int userInput, int x, int &position){
    // sequentialSearch() definitions & initializations
    int sequentialCount = 0;
    x = 0;
    
    // search for the userInput
    while (foundIt == false && x < SIZE){
        sequentialCount++;
        if (bubbles[x] == userInput){
            foundIt = true;
            position = x + 1;
        }
        else{
            x++;
        }
    }
    cout << "Sequential Search comparisons: " << sequentialCount << endl;
} // end sequentialSearch()

// numberPosition module definition
void numberPosition(int position){
    cout << "The position of the number is " << position << endl;
}

// binarySearch module definition
void binarySearch(bool foundIt, int bubbles[], int userInput){
    // binarySearch() definitions & initializations
    int binaryCount = 0;
    int first, last, middle, position;
    first = 0;
    last = SIZE - 1;
    position = -1;
    
    // search for the userInput
    while(!foundIt && first <= last){
        binaryCount++;
        middle = (first + last) / 2;
        
        if (bubbles[middle] == userInput){
            foundIt = true;
            position = middle;
        }
        else if (bubbles[middle] > userInput)
            last = middle - 1;
        else
            first = middle + 1;
    }
    cout << "Binary Search comparisons: " << binaryCount << endl;
} // end binarySearch()
