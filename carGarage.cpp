#include "carClasses.hpp"
#include <iostream>
using namespace std;

int main(){
    Car car1("Toyota", "Carolla", 2007, 100000, 14.2, 14.2, 15);
    car1.preDriveCheck();

    car1.drive(30);

    car1.preDriveCheck();

    car1.drive(100);

    cout << "Current fuel level is " << car1.getFuelLevel() << endl;

    car1.refuel();

    cout << "Current fuel level is " << car1.getFuelLevel() << endl;

    return 0;
}