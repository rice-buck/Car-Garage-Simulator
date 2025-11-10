#include "carClasses.hpp"
#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    cout << fixed << setprecision(1);

    // === Create Cars ===
    Car car1("Toyota", "Camry", 2019, 45600, 28, 10.8, 14.5);
    Car car2("Ford", "Mustang GT", 2022, 12800, 18, 12.5, 16.0);
    Car car3("Honda", "Civic", 2017, 88350, 30, 9.4, 12.4);
    ElectricCar car4("Tesla", "Model 3", 2024, 5200, 120, 82.0, 100.0);

    // === Create Garage ===
    Garage myGarage;
    myGarage.addCar(&car1);
    myGarage.addCar(&car2);
    myGarage.addCar(&car3);
    myGarage.addCar(&car4);

    cout << "\n=========== GARAGE INVENTORY ===========" << endl;
    myGarage.displayGarage();
    cout << "----------------------------------------" << endl;
    cout << "Currently, the " << myGarage.getHighestMileage() << endl;
    cout << "========================================\n\n";


    cout << "=========== GAS CAR TESTS ==============" << endl;

    cout << "\n-- " << car1.carDetails() << " --" << endl;
    car1.preDriveCheck();
    car1.drive(120); 
    car1.drive(80);  
    cout << "Fuel after drives: " << car1.getFuelLevel()
         << " gallons (" << car1.getFuelPercentage() << "%)\n";
    car1.refuel();
    cout << endl;

    cout << "-- " << car2.carDetails() << " --" << endl;
    car2.preDriveCheck();
    car2.drive(60);  
    car2.drive(90);  
    cout << "Fuel after drives: " << car2.getFuelLevel()
         << " gallons (" << car2.getFuelPercentage() << "%)\n";
    car2.refuel();
    cout << endl;

    cout << "-- " << car3.carDetails() << " --" << endl;
    car3.preDriveCheck();
    car3.drive(150); 
    car3.drive(70);  
    car3.refuel();
    car3.drive(40);  
    car3.preDriveCheck();

    cout << "\n========================================\n\n";


    cout << "========= ELECTRIC CAR TESTS ===========" << endl;

    cout << car4.carDetails() << " starts with "
         << car4.getMileage() << " miles and battery at "
         << car4.getBatLvl() << "%.\n";

    car4.driveE(120); 
    cout << "After drive: " << car4.getMileage()
         << " miles, battery at " << car4.getBatLvl() << "%.\n";

    car4.driveE(180); 
    cout << "After drive: " << car4.getMileage()
         << " miles, battery at " << car4.getBatLvl() << "%.\n";

    cout << "Battery low - recharging...\n";
    car4.charge();
    cout << "\nCharged! " << car4.carDetails() << " now at "
         << car4.getBatLvl() << "% battery.\n";
    cout << "========================================\n\n";

    
    cout << "=========== FINAL SUMMARY ==============" << endl;
    cout << "Highest mileage: " << myGarage.getHighestMileage() << endl;
    cout << "----------------------------------------" << endl;
    cout << car1.getModel() << ": " << car1.getMileage() << " miles\n";
    cout << car2.getModel() << ": " << car2.getMileage() << " miles\n";
    cout << car3.getModel() << ": " << car3.getMileage() << " miles\n";
    cout << car4.getModel() << ": " << car4.getMileage() << " miles\n";
    cout << "========================================" << endl;

    return 0;
}
