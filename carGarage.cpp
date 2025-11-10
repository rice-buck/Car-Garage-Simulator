#include "carClasses.hpp"
#include <iostream>
using namespace std;

int main(){

    //make(ma), model(mod), year(yr), mileage(mi), milesPerGallon(mpg), fuelLevel(0), maxFuelLevel(0)
    Car car1("Toyota", "Carolla", 2007, 100000, 15, 14.2, 14.2); //create objects
    Car car2("McLaren", "720s", 2026, 100, 22, 16.0, 18.9);
    Car car3("Fararri", "SF90", 2026, 80, 20, 19.5, 19.5);
    ElectricCar car4("Tesla", "Model Y", 2023, 10500, 50, 65.0, 100.0);

    cout << "Garage: \n"; //add car objects to garage
    Garage myGarage;
    myGarage.addCar(&car1);
    myGarage.addCar(&car2);
    myGarage.addCar(&car3);
    myGarage.addCar(&car4);
    myGarage.displayGarage();
    cout << "The " << myGarage.getHighestMileage() << "has the highest mileage." << endl;

    
   car1.preDriveCheck(); 
    car1.drive(30);
    car1.preDriveCheck();
    car1.drive(100);
    cout << "Current fuel level is " << car1.getFuelLevel() << " gallons or " << car1.getFuelPercentage() << "%." << endl;
    car1.refuel(); 

    
    car2.preDriveCheck();
    car2.drive(40);
    car2.preDriveCheck();
    car2.drive(5);
    cout << "Current fuel level is " << car2.getFuelLevel() << " gallons or " << car2.getFuelPercentage() << "%." << endl;
    car2.refuel();
    cout << "\n\n";

    car3.preDriveCheck();
    car3.drive(40);
    car3.preDriveCheck();
    car3.drive(100);
    car3.refuel();
    car3.drive(50);
    car3.preDriveCheck();

    cout << "The " << myGarage.getHighestMileage() << endl;

    cout << car2.getModel() << " milesage is " << car2.getMileage() << endl;
    cout << car3.getModel() << " milesage is " << car3.getMileage() << endl;

    return 0;
}