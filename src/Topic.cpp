#include "Topic.hpp"

namespace comminterface
{
	void Topic::publish(std::string aMsg)
	{
		mCurrMsg = aMsg;

		for (Subscriber* subscriber : mSubscriberList) {
            subscriber->update();
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
		mSubscriberList.erase(std::remove_if(mSubscriberList.begin(), mSubscriberList.end(),
			[aSubscriber](const Subscriber* s) { return s == aSubscriber; }),
			mSubscriberList.end());
	}

	std::string Topic::receive()
	{
		return mCurrMsg;
	}
}