// Elita Danilyuk
// 31 May 2020

// Lesson 1 Figure 1-7

#include <iostream>

using namespace std;

// start
int main()
{
   // declare variables - learn more in lesson 2
   int myNumber;  // a variable to collect the user input
   int myAnswer;  // a variable to store the calculation result

   // input number
   cin >> myNumber;
   // myAnswer = myNumber * 2
   myAnswer = myNumber * 2; // 2 is an unnamed numeric constant, which we do not
                            // want in our programs. Learn how in lesson 2.
   // output myAnswer
   cout << myAnswer << endl;

   return 0;   
}  // end main() Always label the closing curly - required in this class.
// stop

// When you execute this program, it may be a bit disconcerting that all you see is 
// a blinking cursor.  
// This is an example of the worst user interface.  Well placed prompts will
// be the remedy.  Learn more in lesson 2.  
