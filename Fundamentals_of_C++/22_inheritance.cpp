#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

// second base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle\n";
    }
};

class Four_Wheeler : public Vehicle
{
public:
    Four_Wheeler()
    {
        cout << "Vehicles are objects with 4 wheels\n";
    }
};

//** Single Inheritance
// sub class
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This is a Car\n";
    }
};

// ** Multiple Inheritance
// sub class derived from two base classes
class Car2 : public Vehicle, public FourWheeler
{
public:
    Car2()
    {
        cout << "This is a 4 wheeler vehicle : Car\n";
    }
};

// ** Multilevel Inheritance
// sub-sub class derived from a sub class derived from base class
class Car3 : public Four_Wheeler
{
public:
    Car3()
    {
        cout << "Car is a vehicle with 4 wheels\n";
    }
};

int main()
{
    cout << "\n\t ** Single Inheritance**\n";
    Car car_single;
    cout << "\n\t ** Multiple Inheritance**\n";
    Car2 car_multiple;
    cout << "\n\t ** Multi level Inheritance**\n";
    Car3 car_multiLevel;
}