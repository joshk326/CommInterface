#ifndef IOBJECT_HPP
#define IOBJECT_HPP

#include <string>

namespace comminterface
{
	class IObject
	{
		public:
			virtual void init() = 0;
			virtual void finalize() = 0;
	};
}

#endif