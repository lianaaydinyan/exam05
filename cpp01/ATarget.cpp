#include "ATarget.hpp"


ATarget::ATarget(std::string type_) : type(type_) {}

const std::string& ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(const ASpell& obj) const
{
	std::cout << this->type;
	std::cout << " has been ";
	std::cout << obj.getEffects();
	std::cout << "!\n";
}

void ATarget::setType(const std::string& str)
{
		this->type = str;
}
