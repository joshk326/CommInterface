#include "MsgRouter.hpp"

namespace comminterface
{	
	MsgRouter& MsgRouter::getInstance()
	{
		static MsgRouter instance;
		return instance;
	}

	void MsgRouter::deleteTopic(std::string aTopicName)
	{
		if (mTopicMap.find(aTopicName) != mTopicMap.end())
		{	
			// Free the topic
			delete mTopicMap.at(aTopicName);
			// Remove the entry from the map
			mTopicMap.erase(aTopicName);
		}
		else
		{
			std::cout << aTopicName << " does not exist" << "\n";
		}
	}

	Topic* MsgRouter::getTopic(std::string aTopicName)
	{
		Topic* returnTopic = NULL;
		if (mTopicMap.find(aTopicName) == mTopicMap.end())
		{	
			returnTopic = new Topic(aTopicName);
			mTopicMap.insert(std::make_pair(aTopicName, returnTopic));
		}
		else
		{
			returnTopic = mTopicMap.at(aTopicName);
		}

		return returnTopic;
	}

}