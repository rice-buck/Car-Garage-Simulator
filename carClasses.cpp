#include "carClasses.hpp"
#include <iostream>
#include <string>
using namespace std;

Car::Car(std::string ma, std::string mod, int const yr, int mi, double lvl, double const maxlvl, int mpg)
    : make(ma), model(mod), year(yr), mileage(mi), fuelLevel(lvl), maxFuelLevel(maxlvl), milesPerGallon(mpg) {}

    std::string Car::carDetails(){
        return to_string(year) + " " + make + " " + model;
    }

    std::string Car::getMake(){
        return make;
    }

    std::string Car::getModel(){
        return model;
    }

    int Car::getYear(){
        return year;
    }

    void Car::setMileage(int newMiles){
        mileage += newMiles;
    }
    
    int Car::getMileage(){
        return mileage;
    }

    void Car::setFuelLevel(double newFuelLevel){
        fuelLevel = newFuelLevel;
    }
    double Car::getFuelLevel(){
        return fuelLevel;
    }

    double Car::getMaxFuelLevel(){
        return maxFuelLevel;
    }

    void Car::preDriveCheck(){
        cout << carDetails() << " has " << getFuelLevel() << " gallons and " << getMileage() << " miles." << endl;
    }

    void Car::drive(int miles){
        cout << "The " << year << " " << make << " " << model << " took a " << miles << " mile drive.\n";
        int fuelConsumed = miles / milesPerGallon; //converts miles driven to gallons consumed
        mileage += miles; //adds miles driven to mileage
        fuelLevel -= fuelConsumed; //subtracts gallons consumed
    }

    void Car::refuel(){
        fuelLevel = maxFuelLevel;
        cout << "You have filled up the tank. Fuel level is " << fuelLevel << endl;
    }

