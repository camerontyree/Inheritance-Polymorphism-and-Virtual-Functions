#include "Truck.h"
#include <iostream>
using namespace std;


Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
	return towingCapacity;
}
int Truck::setTowingCapacity(int towingCapacity) {
	this->towingCapacity = towingCapacity;
	return towingCapacity;
}
void Truck::displayInfo() const  {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}