#ifndef TOPIC_HPP
#define TOPIC_HPP

#include <string>
#include <list>
#include <algorithm>

#include "ISubscriber.hpp"

namespace comminterface
{
	class Topic
	{
		public:
			Topic(std::string aTopicName): mTopicName(aTopicName){}
			void subscribe(ISubscriber* aSubscriber);
			void unsubscribe(ISubscriber* aSubscriber);
			void publish(std::string aMsg);
		private:
			std::string mTopicName;
			std::list<ISubscriber*> mSubscriberList;
	};
}
#endif