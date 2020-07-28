/*
Polymorphism example
Animal class
Ray Warren
26 July 2020
*/

/* psuedocode
Class Animal
  // showSpecies method
  Public Module showSpecies()
    Display "I'm just a regular animal."
  End Module

  // makeSound method
  Public Module makeSound()
    Display "Grrrrr"
  End Module
End Class
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// 3 precompiler directive surround the declaration of the base class: ifndef, define and endif
// Their purpose is to prevent multiple declarations of the code they surround.
// This happens when multiple derived classes include this same file.
// Experiment: comment out these statements, compile and see what happens.
#ifndef Base_Class // this can be any name that you choose
#define Base_Class


class Animal
{
  private:
      // nothing for this class

  public:

    // Notice the virtual keyword.  This must be included on the base class methods that will be polymorphic
    virtual void showSpecies()
    {
      cout << "I'm just a regular animal." << endl;
    }

    virtual void makeSound()
    {
      cout << "Grrrrr" << endl;
    }

};  // end class

#endif
