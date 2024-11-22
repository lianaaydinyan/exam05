#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

ASpell* Fwoosh::clone() const
{
	Fwoosh* obj = new Fwoosh();
	return obj;
}

Fwoosh::~Fwoosh()
{
}