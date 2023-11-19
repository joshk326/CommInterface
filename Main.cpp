#include <iostream>

#include "Car.hpp"
#include "Light.hpp"

int main(){
	Car testCar;
	Light testLight;

	testCar.comm = &testLight;
	testLight.comm = &testCar;
	
	testLight.setMsg("Green");
	std::cout << "Lights Current State: " << testLight.getMsg() << "\n";
	std::cout << "Cars Current State: " << testCar.getMsg() << "\n";

	testLight.setMsg("Red");
	std::cout << "Lights Current State: " << testLight.getMsg() << "\n";
	std::cout << "Cars Current State: " << testCar.getMsg() << "\n";	
}