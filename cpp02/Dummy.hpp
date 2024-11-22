#ifndef _dummy_
#define _dummy_


#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget
{
	public:
		ATarget* clone() const;
		Dummy();
		~Dummy();
};

#endif