#include "MsgRouter.hpp"

namespace comminterface
{	
	MsgRouter& MsgRouter::getInstance()
	{
		static MsgRouter instance;
		return instance;
	}

	Topic* MsgRouter::createTopic(std::string aTopicName)
	{		
		Topic* returnTopic = new Topic(aTopicName);
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