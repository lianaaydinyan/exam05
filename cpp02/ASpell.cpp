#include "ASpell.hpp"


void ASpell::launch(const ATarget& obj) const
{
	obj.getHitBySpell(*this);
}

ASpell::ASpell(const std::string& name_, const std::string& effects_) : name(name_), effects(effects_) {}

const std::string& ASpell::getName() const
{
	return this->name;
}

const std::string& ASpell::getEffects() const
{
	return this->effects;
}

ASpell::~ASpell() {}