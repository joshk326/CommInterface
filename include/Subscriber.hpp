#ifndef SUBSCRIBER_HPP
#define SUBSCRIBER_HPP

namespace comminterface
{
	class Subscriber
	{
		public:
		virtual void update(std::string aState) = 0;
	};
}

#endif