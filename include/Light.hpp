#ifndef LIGHT_HPP
#define LIGHT_HPP
#include "MsgRouter.hpp"

namespace comminterface
{
	class Light{
		public:
			enum States{
				RED = 0,
				GREEN = 1
			};
			Light();
			std::string const getState();
			void update();
			void redEvent();
			void greenEvent();
		private:
			MsgRouter* mRouter;
			Topic* mLightChange;
			States mState;
	};
}
#endif