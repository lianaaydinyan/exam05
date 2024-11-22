#ifndef _BrickWall_
#define _BrickWall_

#include "ATarget.hpp"
class ATarget;


class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();
		ATarget* clone() const;
};

#endif