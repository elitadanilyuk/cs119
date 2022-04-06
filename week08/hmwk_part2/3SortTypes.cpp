//
//  Lesson 8 Homework 8 Part 2 sorting Benchmarks (bubble, selection & insersion sort) Danilyuk
//
//  Created by Elita Danilyuk on 19 July 2020.

#include <iostream>
using namespace std;

// module prototypes
void initialOutput();

void outputBubble(int bubbles[], int &x);
void bubbleSort(int bubbles[], int &countBubble, int x, int &temp);

void enterTwice();

void outputSelection(int selections[], int x);
void selectionSort(int selections[], int &countSelection, int x, int temp);

void outputInsertion(int insertions[], int x);
void insertionSort(int insertions[], int x, int &countInsertion);

// global CONSTANTS
const int SIZE = 20;

// start main()
int main()
{
    // defined local variables & introduction
    int bubbles[SIZE] = {26, 45, 56, 12, 78, 74, 39, 22, 5, 90, 87, 32, 28, 11, 93, 62, 79, 53, 22, 51};
    int selections[SIZE] = {26, 45, 56, 12, 78, 74, 39, 22, 5, 90, 87, 32, 28, 11, 93, 62, 79, 53, 22, 51};
    int insertions[SIZE] = {26, 45, 56, 12, 78, 74, 39, 22, 5, 90, 87, 32, 28, 11, 93, 62, 79, 53, 22, 51};
    int x, temp, countBubble, countSelection, countInsertion;
            
    // (PROCESS) & (OUTPUT)
    initialOutput();
    outputBubble(bubbles, x);
    cout << "Bubble Sorted:" << endl;
    bubbleSort(bubbles, countBubble, x, temp);
    outputBubble(bubbles, x);
    cout << "Number of location swaps: " << countBubble << endl;
    enterTwice();
    
    initialOutput();
    outputSelection(selections, x);
    cout << "Selection Sorted:" << endl;
    selectionSort(selections, countSelection, x, temp);
    outputSelection(selections, x);
    cout << "Number of location swaps: " << countSelection << endl;
    enterTwice();
    
    initialOutput();
    outputInsertion(insertions, x);
    cout << "Insertion Sorted:" << endl;
    insertionSort(insertions, x, countInsertion);
    outputInsertion(insertions, x);
    cout << "Number of location swaps: " << countInsertion << endl;
    enterTwice();
    
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
    // bubbleSort() definitions & initializations
    int maxElement; // definition for last element to compare
    countBubble = 0;
    
    for (maxElement = SIZE - 1; maxElement >= 0; maxElement--){
        for (x = 0; x <= maxElement - 1; x++){
            if (bubbles[x] > bubbles[x + 1]){
                //swapping two elements
                temp = bubbles[x];
                bubbles[x] = bubbles[x + 1];
                bubbles[x + 1] = temp;
                
                countBubble++;
            } // end if
        }
    }
} // end bubbleSort()

// enterTwice module definition
void enterTwice(){
    cout << endl;
    cout << endl;
} // end enterTwice()

// outputSelection module definition
void outputSelection(int selections[], int x){
    x = 0; // initializing x to 0
    for (x = 0; x < SIZE; x++)
        cout << selections[x] << " ";
    cout << endl;
} // end outputSelection()

// selectionSort module definition
void selectionSort(int selections[], int &countSelection, int x, int temp){
    // selectionSort() definitions & initializations
    int startScan, minIndex, minValue;
    countSelection = 0;
    
    //start selection sort method
    for (startScan = 0; startScan < (SIZE-1); startScan++){
        minIndex = startScan;
        minValue = selections[startScan];
        
        // scanning array to find the minValue
        for (x = (startScan + 1); x < SIZE; x++){
            if (selections[x] < minValue){
                minValue = selections[x];
                minIndex = x;
            } // end if
        }
        // swapping two elements
        temp = selections[minIndex];
        selections[minIndex] = selections[startScan];
        selections[startScan] = temp;
        
        countSelection++;
    }
} // end selectionSort()

// outputInsertion module definition
void outputInsertion(int insertions[], int x){
    for (x = 0; x < SIZE; x++)
        cout << insertions[x] << " ";
    cout << endl;
} // end outputInsertion()

// insertionSort module definition
void insertionSort(int insertions[], int x, int &countInsertion){
    // insertinoSort() definitions & initializations
    int unsortedValue;
    int scan;
    countInsertion = 0;
    
    for (x = 1; x < SIZE; x++) {
        unsortedValue = insertions[x];
        scan = x;
        
        while ((scan > 0) && (insertions[scan - 1] > unsortedValue)) {
            insertions[scan] = insertions[scan - 1];
            scan--;
        }
        insertions[scan] = unsortedValue;
        
        countInsertion++;
    }
} // end insertionSort()
