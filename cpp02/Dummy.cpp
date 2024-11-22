#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

ATarget* Dummy::clone() const
{
	Dummy *obj = new Dummy();
	return obj;
}


Dummy::~Dummy() {}
