/*
Cameron Tyree
CIS 1202 101
April 10 2024
*/

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "personalLibrary.h"

int main() {

	int yearBuilt, numOfDoors, towingCapacity;
	string manufacturer;

	cout << "Vehicle Program" << endl;

	cout << "\nVehicle: \nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = validateFloatNoNegative("Enter the year it was built : ");
	Vehicle vehicle(manufacturer, yearBuilt);
	vehicle.displayInfo();
	cin.clear();
	cin.ignore();

	cout << "\nCar: \nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = validateFloatNoNegative("Enter the year it was built: ");
	numOfDoors = validateFloatNoNegative("Enter the amount of doors on the car: ");
	Car car(manufacturer, yearBuilt, numOfDoors);
	car.displayInfo();
	cin.clear();
	cin.ignore();

	cout << "\nTruck: \nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = validateFloatNoNegative("Enter the year it was built: ");
	towingCapacity = validateFloatNoNegative("Enter the towing capacity (lb): ");
	Truck truck(manufacturer, yearBuilt, towingCapacity);
	truck.displayInfo();

	endProgram();

}