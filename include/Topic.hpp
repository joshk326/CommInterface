#ifndef TOPIC_HPP
#define TOPIC_HPP

#include <string>
#include <vector>
#include <algorithm>

#include "Subscriber.hpp"

namespace comminterface
{
	class Topic
	{
		public:
			Topic(std::string aTopicName): mTopicName(aTopicName){}
			void subscribe(Subscriber* aSubscriber);
			void unsubscribe(Subscriber* aSubscriber);
			void publish(std::string aMsg);
		private:
			std::string mTopicName;
			std::string mCurrMsg;
			std::vector<Subscriber*> mSubscriberList;
	};
}
#endif