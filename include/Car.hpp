#ifndef CAR_HPP
#define CAR_HPP

#include "MsgRouter.hpp"
#include "ISubscriber.hpp"
#include "IObect.hpp"

namespace comminterface
{
	class Car : public ISubscriber, public IObject
	{
		public:
			enum States
			{
				DRIVE = 0,
				STOP = 1
			};
			Car();
			std::string const getState();
			virtual void init();
			virtual void finalize();
		private:
			Topic* mLightChange;
			States mState;
			void goEvent();
			virtual void update(std::string aMsg);
			void stopEvent();
	};
}
#endif