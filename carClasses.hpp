#include <string>

class Car{ 
//attributes
private:
    std::string const make;
    std::string const model;
    int const year;
    int mileage;
    double fuelLevel;

//methods
public:
    //constructor
    Car(std::string ma, std::string mod, int yr, int mi, double lvl);

    std::string getMake();

    std::string getModel();

    int getYear();

    void setMileage(int newMiles);
    int getMileage();

    void setFuelLevel(double newFuelLevel);
    double getFuelLevel();

    void drive(int miles);

    void refuel(int gallons);

};

class Garage{
//stores cars with vector<Car>cars


};