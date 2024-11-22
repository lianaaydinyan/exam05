#ifndef _Spellbook_
#define _Spellbook_


#include "ASpell.hpp"
#include <vector>
#include <map>

class Spellbook
{
	private:
		std::vector<std::map<std::string, std::string>> book;
		Spellbook(const Spellbook& obj);
		Spellbook& operator=(const Spell& obj);
	public:
		~Spellbook();
		Spellbook();
		void learnSpell(ASpell* obj);
		void forgetSpell(string const& str);
		ASpell* createSpell(string const& str);

};

#endif