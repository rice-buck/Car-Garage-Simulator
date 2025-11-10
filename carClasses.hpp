#include <string>
#include <vector>

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
    // Full constructor (gas cars)
    Car(std::string ma, std::string mod, int const yr, int mi, int mpg, double lvl, double const maxlvl);

    // Overloaded constructor (electric cars)
    Car(std::string ma, std::string mod, int const yr, int mi, int mpg);

    std::string carDetails() const;

    std::string getMake();

    std::string getModel();

    int getYear();

    void setMileage(int newMiles);
    int getMileage();

    void setFuelLevel(double newFuelLevel);
    double getFuelLevel();

    double getMaxFuelLevel();

    double getFuelPercentage();

    void preDriveCheck();

    void drive(int miles);

    void refuel();

    ~Car(); //destructor

};

class ElectricCar : public Car{
private:
    double batteryLvl;
    double const maxBatteryLvl;
public:
    ElectricCar(std::string ma, std::string mod, int const yr, int mi, int mpg, double bat, double const maxbat = 100.0);

    void charge();

    double getBatLvl();

    void driveE(int miles);

    ~ElectricCar();
};

class Garage{
    private:
    std::vector<Car*> cars; //stores cars

    public:
    void addCar(Car* newCar);

    void displayGarage() const;

    std::string getHighestMileage();
    ~Garage();
};