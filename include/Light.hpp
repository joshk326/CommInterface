#ifndef LIGHT_HPP
#define LIGHT_HPP
#include "Observer.hpp"

class Light : public Observer{
	public:
		enum States{
			RED = 0,
			GREEN = 1
		};
		Observer *comm;
		std::string const getMsg();
		void setMsg(std::string aMsg);
		void update();
	private:
		States mState;
		void redEvent();
		void greenEvent();
};
#endif