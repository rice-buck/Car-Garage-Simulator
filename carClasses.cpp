#include "carClasses.hpp"
#include <iostream>
#include <string>
using namespace std;

// Gas car constructor
Car::Car(std::string ma, std::string mod, int const yr, int mi, int mpg, double lvl, double const maxlvl)
    : make(ma), model(mod), year(yr), mileage(mi),
      fuelLevel(lvl), maxFuelLevel(maxlvl), milesPerGallon(mpg) {}

// Electric car constructor (no fuel)
Car::Car(std::string ma, std::string mod, int const yr, int mi, int mpg)
    : make(ma), model(mod), year(yr), mileage(mi),
      fuelLevel(0), maxFuelLevel(0), milesPerGallon(mpg) {}

    std::string Car::carDetails() const{
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

    double Car::getFuelPercentage(){
        double fuelPercent = (fuelLevel / maxFuelLevel) * 100;
        return fuelPercent;
    }

    void Car::preDriveCheck(){
        cout << carDetails() << " has " << getFuelLevel() << " gallons or " << getFuelPercentage() << "%. Mileage: " << getMileage() << " miles" << endl;
    }

    void Car::drive(int miles) {
    cout << "The " << year << " " << make << " " << model
         << " took a " << miles << " mile drive.\n";

    int fuelConsumed = miles / milesPerGallon; // converts miles to fuel
    setMileage(miles);                         // adds miles driven to mileage
    fuelLevel -= fuelConsumed;                 // subtracts gallons consumed

    //Prevent negative fuel
    if (fuelLevel < 0)
        fuelLevel = 0;

    cout << "Fuel left: " << fuelLevel << " gallons (" << getFuelPercentage() << "%)\n";
}


    void Car::refuel(){
        fuelLevel = maxFuelLevel;
        cout << "Car refueled. " << getFuelLevel() << " gallons or " << getFuelPercentage() << "%" << endl;
    }

    Car::~Car() {}


//Garage class methods
    void Garage::addCar(Car* newCar) {
        cars.push_back(newCar);
}

    void Garage::displayGarage()const { //prints cars in garage
        for (const auto& c : cars) {
    cout << c->carDetails() << endl;
        }
    }

    std::string Garage::getHighestMileage() {
    int previousMileage = 0;
    std::string highestMileageCarDetails;

    for (size_t i = 0; i < cars.size(); i++) {
        int currentMileage = cars[i]->getMileage();
        if (currentMileage > previousMileage) {
            highestMileageCarDetails = cars[i]->carDetails();
            previousMileage = currentMileage;
        }
    }
    return highestMileageCarDetails + " with " + to_string(previousMileage) + " miles has the highest mileage.";
}

Garage::~Garage() {
    for (auto c : cars) { //if needed, but commented out for now
        //delete c;
    }

    //cout << "Garage cleared.\n";
}
    

ElectricCar::ElectricCar(std::string ma, std::string mod, int const yr, int mi, int mpg, double bat, double const maxbat)
     : Car(ma, mod, yr, mi, mpg), batteryLvl(bat), maxBatteryLvl(maxbat) {}

     double ElectricCar::getBatLvl(){
        return batteryLvl;
     }

     void ElectricCar::charge(){
        batteryLvl = maxBatteryLvl;
        cout << "You have charged the battery to " << batteryLvl << "%";
     }

     void ElectricCar::driveE(int miles) {
    cout << "The " << getYear() << " " << getMake() << " " << getModel()
         << " took a " << miles << " mile drive.\n";

    int batConsumed = miles / 2.5; // converts miles to battery percentage loss
    setMileage(miles);             // adds miles driven to mileage
    batteryLvl -= batConsumed;     // reduces battery

    // Clamp between 0 and max
    if (batteryLvl < 0)
        batteryLvl = 0;
    else if (batteryLvl > maxBatteryLvl)
        batteryLvl = maxBatteryLvl;

    cout << "Battery remaining: " << batteryLvl << "%\n";
}

ElectricCar::~ElectricCar() {}