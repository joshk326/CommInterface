#ifndef ISUBSCRIBER_HPP
#define ISUBSCRIBER_HPP

#include <string>

namespace comminterface
{
	class ISubscriber
	{
		public:
			virtual void update(std::string aState) = 0;
	};
}

#endif