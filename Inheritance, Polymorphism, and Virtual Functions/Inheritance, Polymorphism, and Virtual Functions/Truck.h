#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"


class Truck : public Vehicle {
private:
	int towingCapacity;
public:
	Truck(string manufacturer, int yearBuilt, int towingCapacity);
	int getTowingCapacity() const;
	int setTowingCapacity(int towingCapacity);
	void displayInfo() const override;
};

#endif 
