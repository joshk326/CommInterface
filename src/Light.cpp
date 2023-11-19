#include "Light.hpp"

namespace comminterface{
	Light::Light()
	{
		mRouter = MsgRouter::GetInstance();
		mLightChange = mRouter->getTopic("LightChange");
	}

	std::string const Light::getState(){
		std::string msg;
		if(mState == GREEN){
			msg = "Go";
		}else{
			msg = "Stop";
		}
		return msg;
	}

	void Light::redEvent(){
		mState = RED;
		mLightChange->publish("Stop");
	}

	void Light::greenEvent(){
		mState = GREEN;
		mLightChange->publish("Drive");
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