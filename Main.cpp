#include <iostream>

#include "Car.hpp"
#include "Light.hpp"

int main()
{
	comminterface::Car* testCar = new comminterface::Car();
	comminterface::Light* testLight = new comminterface::Light();
	
	std::cout << "\nExecuting Light's green event" << "\n\n";
	testLight->greenEvent();
	std::cout << "Lights Current State: " << testLight->getState() << "\n";
	std::cout << "Cars Current State: " << testCar->getState() << "\n";

	std::cout << "\nExecuting Light's red event" << "\n\n";
	testLight->redEvent();
	std::cout << "Lights Current State: " << testLight->getState() << "\n";
	std::cout << "Cars Current State: " << testCar->getState() << "\n";

	// Clean up
	testCar->finalize();
	testLight->finalize();
	comminterface::MsgRouter::getInstance().deleteTopic("LightChange");
	delete testCar;
	delete testLight;
}