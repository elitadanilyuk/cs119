/*
Polymorphism example
driver code
Ray Warren
26 July 2020
*/

/* psuedocode
Module main()
  // declare three class variables
  Declare Animal myAnimal
  Declare Dog myDog
  Declare Cat myCat

  // create an Animal object, a Dog object,
  // and a Cat object.
  Set myAnimal = New Animal()
  Set myDog = New Dog()
  Set myCat = New Cat()

  // Show info about an animal.
  Display "Here is info about an animal"
  showAnimalInfo(myAnimal)
  Display

  // Show info about a dog.
  Display "Here is info about a dog"
  showAnimalInfo(myDog)
  Display

  // Show info about an animal.
  Display "Here is info about a cat"
  showAnimalInfo(myCat)
  Display
End Module

// The show AnimalInfo module accepts and Animal
// object as an argument and displays information
// about it.
Module showAnimalInfo(Animal creature)
  call creature.showSpecies()
  call creature.makeSound()
End Module


Example output:

Here is info about an animal.
I'm just a regular animal.
Grrrrr
Here is info about a dog.
I'm a dog.
Woof! Woof!
Here is info about a cat.
I'm a cat.
Meow

*/


#include <iostream>
#include <cstdlib>
#include <string>

// include the declared project class files
#include "Dog.hpp"
#include "Cat.hpp"

using namespace std;

// prototype statements
void showAnimalInfo(Animal &creature);


int main()
{
  // Declare three class variables
  Animal myAnimal;
  Dog myDog;
  Cat myCat;

  // create an Animal object, a Dog object,
  // and a Cat object.
  // - this is already done at the time

  // Show info about an animal
  cout << "Here is info about an animal." << endl;
  showAnimalInfo(myAnimal);

  // Show info about a dog
  cout << "Here is info about a dog." << endl;
  showAnimalInfo(myDog);

  // Show info about a cat
  cout << "Here is info about a cat." << endl;
  showAnimalInfo(myCat);

}  // end main()

// The show AnimalInfo module accepts and Animal
// object as an argument and displays information
// about it.
// Notice that the class that will behave polymorphic is passed by reference
// Experiment: Remove the address of (&) operator, compile and see what happens when the code is run.
void showAnimalInfo(Animal &creature)
{
  creature.showSpecies();
  creature.makeSound();
} // end showAnimalInfo()
