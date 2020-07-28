/*
Polymorphism example
Cat class
Ray Warren
26 July 2020
*/

/* psuedocode
Class Cat  Extends Animal
  // showSpecies method
  Public Module showSpecies()
    Display "I'm a cat."
  End Module

  // makeSound method
  Public Module makeSound()
    Display "Meow"
  End Module
End Class
*/


#include <iostream>
#include <cstdlib>

// include the base class
#include "Animal.hpp"

using namespace std;

class Cat : public Animal
{
  private:
      // nothing for this class

  public:

    void showSpecies()
    {
      cout << "I'm a cat." << endl;
    }

    void makeSound()
    {
      cout << "Meow" << endl;
    }

};  // end class

