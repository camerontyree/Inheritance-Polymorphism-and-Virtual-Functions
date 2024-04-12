#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

string Vehicle::getManufacturer() const {
	return manufacturer;
}
void Vehicle::setManufacturer(string manufacturer) {
	this->manufacturer = manufacturer;
}
int Vehicle::getYearBuilt() const {
	return yearBuilt;
}
int Vehicle::setYearBuilt(string manufacturer) {
	this->yearBuilt = yearBuilt;
	return yearBuilt;
}
void Vehicle::displayInfo() const {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}

