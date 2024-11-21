#include "ASpell.hpp"


void ASpell::launch(const ATarget& obj)
{
	obj.getHitBySpell(obj);
}

ASpell::ASpell(std::string& name_, std::string& effects_) : name(name_), effects(effects_) {}

std::string& ASpell::getName() const
{
	return this->name;
}

std::string& ASpell::getEffects() const
{
	return this->effects;
}