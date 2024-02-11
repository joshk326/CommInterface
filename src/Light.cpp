#include "Light.hpp"

namespace comminterface{
	Light::Light()
	{
		mLightChange = MsgRouter::getInstance().getTopic("LightChange");
	}

	std::string const Light::getState(){
		std::string msg;
		if(mState == GREEN){
			msg = "Green";
		}else{
			msg = "Red";
		}
		return msg;
	}

	void Light::redEvent(){
		mState = RED;
		mLightChange->publish("Red");
	}

	void Light::greenEvent(){
		mState = GREEN;
		mLightChange->publish("Green");
	}

	void Light::update(){
	switch (mState)
	{
	case GREEN:
		greenEvent();
		break;
	case RED:
		redEvent();
		break;
	default:
		break;
	}
}
}