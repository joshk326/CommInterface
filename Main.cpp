#include <iostream>

#include "Car.hpp"
#include "Light.hpp"

int main(){
	comminterface::Car testCar;
	comminterface::Light testLight;
	
	testLight.greenEvent();
	std::cout << "Lights Current State: " << testLight.getState() << "\n";
	std::cout << "Cars Current State: " << testCar.getState() << "\n";

	testLight.redEvent();
	std::cout << "Lights Current State: " << testLight.getState() << "\n";
	std::cout << "Cars Current State: " << testCar.getState() << "\n";	
}