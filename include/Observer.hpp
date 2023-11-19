#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <string>

class Observer{
	public:
		virtual const std::string getMsg()=0;
		virtual void setMsg(std::string aMsg)=0;
	protected:
		virtual void update()=0;
};
#endif