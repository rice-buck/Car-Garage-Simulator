#include <string>

class Car{ 
//attributes
private:
    std::string const make;
    std::string const model;
    int const year;
    int mileage;
    double fuelLevel;
    double const maxFuelLevel;
    int milesPerGallon;

//methods
public:
    //constructor
    Car(std::string ma, std::string mod, int const yr, int mi, double lvl, double const maxlvl, int mpg);

    std::string carDetails();

    std::string getMake();

    std::string getModel();

    int getYear();

    void setMileage(int newMiles);
    int getMileage();

    void setFuelLevel(double newFuelLevel);
    double getFuelLevel();

    double getMaxFuelLevel();

    void preDriveCheck();

    void drive(int miles);

    void refuel();


};

class Garage{
//stores cars with vector<Car>cars


};