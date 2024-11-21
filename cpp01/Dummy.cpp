#include "Dummy.hpp"

Dummy::Dummy()
{
	type = "Target Practice Dummy";
}
Dummy* Dummy::clone() override
{
	Dummy *obj = new Dummy();
	return obj;
}
