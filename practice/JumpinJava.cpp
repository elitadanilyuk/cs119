// JumpinJava.cpp - This program looks up and prints the names and prices of coffee orders.
// Input:  Interactive
// Output:  Name and price of coffee orders or error message if add-in is not found

#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare variables.
   string addIn;
   // Add-in ordered
   const int NUM_ITEMS = 5;
   // Named constant
   
   // Initialized array of add-ins
   string addIns[] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"};
   // Initialized array of add-in prices
   double addInPrices[] = {.89, .25, .59, 1.50, 1.75};
   bool foundIt = false;
   // Flag variable
   int x = 0;
   // Loop control variable
   double orderTotal = 2.00;
   // All orders start with a 2.00 charge

   // Get user input
     cout << "Enter coffee add-in or XXX to quit: ";
     cin >> addIn;
    
    
   // Write the rest of the program here.

   //// Array search for name of add-in
   while (foundIt == false && x < NUM_ITEMS)
   {
     if (addIns[x] == addIn)
        foundIt = true;
     else
        x = x + 1;
   }
   // Print name and price or "Sorry, we do not carry that."
   if (foundIt)
   {
      cout << addIn << endl;
      cout << addInPrices[x] << endl;
   }
   else
      cout << "Sorry, we do not carry that." << endl;
   //// Cost of total order
   cout << "Order Total is $" << (orderTotal + addInPrices[x]) << endl;

   return 0;
} // End of main()
