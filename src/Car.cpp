#include "Car.hpp"
namespace comminterface
{
	Car::Car()
	{
		mRouter = MsgRouter::GetInstance();
		mLightChange = mRouter->getTopic("LightChange");
		mLightChange->subscribe(this);
	}

	std::string const Car::getState(){
		std::string msg;
		if(mState == DRIVE){
			msg = "Drive";
		}else{
			msg = "Stop";
		}
		return msg;
	}

	void Car::update(std::string aState)
	{
		if(aState == "Red")
		{
			stopEvent();
		}
		else
		{
			goEvent();
		}
	}

	void Car::goEvent(){
		mState = DRIVE;
	}

	void Car::stopEvent(){
		mState = STOP;
	}
}