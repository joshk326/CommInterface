#include "Car.hpp"
namespace comminterface
{
	Car::Car()
	{
		// Initialize the car
		init();
	}

	void Car::init()
	{
		mLightChange = MsgRouter::getInstance().getTopic("LightChange");
		mLightChange->subscribe(this);
	}

	void Car::finalize()
	{
		mLightChange->unsubscribe(this);
	}

	std::string const Car::getState()
	{
		std::string msg;
		if(mState == DRIVE){
			msg = "Drive";
		}else{
			msg = "Stop";
		}
		return msg;
	}

	void Car::update(std::string aMsg)
	{
		if(aMsg == "Red")
		{
			stopEvent();
		}
		else if (aMsg == "Green")
		{
			goEvent();
		}
	}

	void Car::goEvent()
	{
		mState = DRIVE;
	}

	void Car::stopEvent()
	{
		mState = STOP;
	}
}