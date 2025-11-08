#include "carClasses.hpp"
#include <iostream>
#include <string>
using namespace std;

Car::Car(std::string ma, std::string mod, int yr, int mi, double lvl)
    : make(ma), model(mod), year(yr), mileage(mi), fuelLevel(lvl) {}

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

    void Car::drive(int miles){
        cout << "The " << year << " " << make << " " << model << " took a " << miles << " drive.\n";
    }

    void Car::refuel(int gallons){
        fuelLevel = gallons;
    }
