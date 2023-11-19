#ifndef CAR_HPP
#define CAR_HPP
#include "Observer.hpp"

class Car : public Observer{
	public:
		enum States{
			DRIVE = 0,
			STOP = 1
		};
		Observer *comm;
		std::string const getMsg();
		void setMsg(std::string aMsg);
		void update();
		std::string stateToStr();
	private:
		States mState;
		void goEvent();
		void stopEvent();
};
#endif