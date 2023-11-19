#include "Car.hpp"

std::string const Car::getMsg(){
	std::string msg;
	if(mState == DRIVE){
		msg = "Drive";
	}else{
		msg = "Stop";
	}
	return msg;
}

void Car::setMsg(std::string aMsg){
	if(aMsg == "Drive"){
		mState = DRIVE;
	}else{
		mState = STOP;
	}
	update();
}

void Car::goEvent(){
	mState = DRIVE;
}

void Car::stopEvent(){
	mState = STOP;
}

void Car::update(){
	switch (mState)
	{
	case DRIVE:
		goEvent();
		break;
	case STOP:
		stopEvent();
		break;
	default:
		break;
	}
}