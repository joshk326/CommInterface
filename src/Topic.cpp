#include "Topic.hpp"

namespace comminterface
{
	void Topic::publish(std::string aMsg)
	{
		mCurrMsg = aMsg;

		for(int i = 0; i < mSubscriberList.size(); i++)
		{
			mSubscriberList[i]->update(aMsg);
		}
	}

	void Topic::subscribe(Subscriber* aSubscriber)
	{
		if(aSubscriber)
		{
			mSubscriberList.push_back(aSubscriber);
		}
	}

	void Topic::unsubscribe(Subscriber* aSubscriber)
	{
		if (aSubscriber)
		{
			mSubscriberList.erase(std::remove(mSubscriberList.begin(), mSubscriberList.end(), aSubscriber), mSubscriberList.end());
		}
	}
}