#include "SpellBook.hpp"


Spellbook::~Spellbook()
{}
Spellbook::Spellbook()
{}
void Spellbook::learnSpell(ASpell* obj)
{
	if (obj)
	{
		std::map<std::string, std::string> spell;
		spell["name"] = obj->getName();
		spell["effects"] = obj->getEffects();
		book.push_back(spell);
	}
}

void Spellbook::forgetSpell(string const& str)
{
	if (obj)
	{
		std::vector<std::map<std::string, std::string>> it;
		for (it = book.begin(); it != book.end(); ++it)
		{
			std::vector<std::map<std::string, std::string>> find = it->find("name");
			if (find != book.end() && find->second = str)
			{
				book.erase();
				return ;
			}

		}
	}
}
ASpell* Spellbook::createSpell(string const& str)
{
	ASpell *obj = new ASpell(str, "no effect");
	return obj;
}