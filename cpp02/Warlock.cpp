#include "Warlock.hpp"

Warlock::Warlock(const std::string& name_, const std::string& title_) : name(name_), title(title_)
{
	std::cout << name << ": This looks like another boring day.\n";
}

const std::string& Warlock::getSpell() const
{
	return this->spell;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

const std::string& Warlock::getName() const
{
	return this->name;
}

const std::string& Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(const std::string& str)
{
	this->title = str;
}

void Warlock::learnSpell(ASpell* obj)
{
	this->spell = obj->getName();
}
void Warlock::forgetSpell(const std::string& str)
{
	this->spell = str;
}
void Warlock::launchSpell(const std::string& str, ATarget& obj)
{
	if (str == this->spell)
		obj.setType(getSpell());
}
