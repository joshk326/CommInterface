#ifndef CAR_HPP
#define CAR_HPP

#include "MsgRouter.hpp"
#include "Subscriber.hpp"

namespace comminterface
{
	class Car : public Subscriber{
		public:
			enum States{
				DRIVE = 0,
				STOP = 1
			};
			Car();
			std::string const getState();
		private:
			MsgRouter* mRouter;
			Topic* mLightChange;
			States mState;
			void update(std::string aState);
			void goEvent();
			void stopEvent();
	};
}
#endif