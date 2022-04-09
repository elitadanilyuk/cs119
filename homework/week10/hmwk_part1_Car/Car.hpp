#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

int const MINSPEED = 0;
int const SPEEDINTERVAL = 5;

using namespace std;

class Car
{
    private:
        int yearModel;
        string make;
        int speed;

    public:
        // constructor
        Car(int yearModel, string make);
        // set functions
        void setYearModel(int aYearModel);
        void setMake(string aMake);
        void setSpeed(int aSpeed);
        // get functions
        int getYearModel();
        string getMake();
        int getSpeed();
        // Mutators
        virtual void accelerate();
        virtual void brake();
}; // end Class{}
#endif

// Car module definition
Car::Car(int aYearModel, string aMake)
{
    int aSpeed = 0;
    setYearModel(aYearModel);
    setMake(aMake);
    setSpeed(aSpeed);
} // end Car()

// setYearModel module definition
void Car::setYearModel(int aYearModel)
{
    yearModel = aYearModel;
} //end setYearModel()

// setMake module definition
void Car::setMake(string aMake)
{
    make = aMake;
} // end setMake()

// setSpeed module definition
void Car::setSpeed(int aSpeed)
{
    speed = aSpeed;
} // end setSpeed()


// getYearModel module definition
int Car::getYearModel()
{
    return yearModel;
} //end getYearModel

// getMake module definition
string Car::getMake()
{
    return make;
} // end getMake()

// getSpeed module definition
int Car::getSpeed()
{
    return speed;
} // end getSpeed()


// accelerate module definition
void Car::accelerate()
{
    speed += SPEEDINTERVAL;
} // end accelerate()

// break module definition
void Car::brake()
{
    if(speed > SPEEDINTERVAL)
        speed -= SPEEDINTERVAL;
    else
        speed = MINSPEED;
} // end brake()

