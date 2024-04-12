#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string manufacturer, int yearBuilt, int numOfDoors) : Vehicle(manufacturer, yearBuilt), numOfDoors(numOfDoors) {}

int Car::getNumOfDoors() const {
	return numOfDoors;
}
int Car::setNumOfDoors() {
	this->numOfDoors = numOfDoors;
	return numOfDoors;
}
void Car::displayInfo() const {
	Vehicle::displayInfo();
	cout << "# of car doors: " << numOfDoors << endl;
}
