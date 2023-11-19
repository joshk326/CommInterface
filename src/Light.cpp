#include "Light.hpp"

std::string const Light::getMsg(){
	std::string msg;
	if(mState == GREEN){
		msg = "Go";
	}else{
		msg = "Stop";
	}
	return msg;
}

void Light::setMsg(std::string aMsg){
	if(aMsg == "Green"){
		mState = GREEN;
	}else{
		mState = RED;
	}
	update();
}

void Light::redEvent(){
	mState = RED;
	comm->setMsg("Stop");
}

void Light::greenEvent(){
	mState = GREEN;
	comm->setMsg("Drive");
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