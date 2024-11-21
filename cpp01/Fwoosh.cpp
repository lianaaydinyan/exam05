#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh* Fwoosh::clone() override
{
	Fwoosh *obj = new Fwoosh();
	return obj;
}

