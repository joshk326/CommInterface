#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "MsgRouter.hpp"
#include "IObect.hpp"

namespace comminterface
{
	class Light: public IObject
	{
		public:
			enum States
			{
				RED = 0,
				GREEN = 1
			};
			Light();
			std::string const getState();
			virtual void init();
			virtual void finalize();
			void redEvent();
			void greenEvent();
		private:
			void update();
			Topic* mLightChange;
			States mState;
	};
}
#endif