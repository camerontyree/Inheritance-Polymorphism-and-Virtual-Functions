#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car : public Vehicle {
private:
	int numOfDoors;
public:
	Car(string manufacturer, int yearBuilt, int numOfDoors);
	int getNumOfDoors() const;
	int setNumOfDoors();
	void displayInfo() const override;

};

#endif 