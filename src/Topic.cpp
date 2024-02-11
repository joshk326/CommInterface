#include "Topic.hpp"

namespace comminterface
{
	void Topic::publish(std::string aMsg)
	{
		const std::list<ISubscriber*>::const_iterator end = mSubscriberList.end();
		for (std::list<ISubscriber*>::iterator curr = mSubscriberList.begin();
			 curr != end;
			 ++curr)
		{
			(*curr)->update(aMsg);
		}
	}

	void Topic::subscribe(ISubscriber* aSubscriber)
	{
		// See if subcriber does not exist in the list
		bool found = std::find(mSubscriberList.begin(), mSubscriberList.end(), aSubscriber) != mSubscriberList.end();
		if (aSubscriber != NULL && !found)
		{
			mSubscriberList.push_back(aSubscriber);
		}
	}

	void Topic::unsubscribe(ISubscriber* aSubscriber)
	{
		// See if subscriber exists in the list
		bool found = std::find(mSubscriberList.begin(), mSubscriberList.end(), aSubscriber) != mSubscriberList.end();
		if (aSubscriber != NULL && found)
		{
			mSubscriberList.remove(aSubscriber);
		}
	}
}