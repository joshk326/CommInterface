#include "MsgRouter.hpp"

namespace comminterface
{
	MsgRouter* MsgRouter::mInstance = NULL;
	
	MsgRouter* MsgRouter::GetInstance()
	{
		if(mInstance == NULL)
		{
			mInstance = new MsgRouter();
		}

		return mInstance;
	}

	Topic* MsgRouter::createTopic(std::string aTopicName)
	{
		Topic* returnTopic = NULL;
		
		returnTopic = new Topic(aTopicName);
		mTopicMap.insert(std::make_pair(aTopicName, returnTopic));

		return returnTopic;
	}

	Topic* MsgRouter::getTopic(std::string aTopicName)
	{
		Topic* returnTopic = NULL;
		if(mTopicMap.find(aTopicName) == mTopicMap.end())
		{	
			returnTopic = createTopic(aTopicName);
		}
		else
		{
			returnTopic = mTopicMap.at(aTopicName);
		}

		return returnTopic;
	}
}