#ifndef MSGROUTER_HPP
#define MSGROUTER_HPP

#include <cstddef>
#include <map>

#include "Topic.hpp"

namespace comminterface
{
	class MsgRouter
	{
		public:
			static MsgRouter& getInstance();
			Topic* getTopic(std::string aTopicName);
		private:
			MsgRouter(MsgRouter const&);
			void operator=(MsgRouter const&);
			std::map<std::string, Topic*> mTopicMap;
			MsgRouter() {}
			Topic* createTopic(std::string aTopicName);

	};
}

#endif