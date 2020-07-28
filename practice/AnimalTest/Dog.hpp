/*
Polymorphism example
Dog class
Ray Warren
26 July 2020
*/

/* psuedocode
Class Dog Extends Animal
  // showSpecies method
  Public Module showSpecies()
    Display "I'm a dog."
  End Module

  // makeSound method
  Public Module makeSound()
    Display "Woof! Woof!"
  End Module
End Class
*/


#include <iostream>
#include <cstdlib>

// include the base class
#include "Animal.hpp"

using namespace std;

class Dog : public Animal
{
  private:
      // nothing for this class

  public:

    void showSpecies()
    {
      cout << "I'm a dog." << endl;
    }

    void makeSound()
    {
      cout << "Woof! Woof!" << endl;
    }

};  // end class
