#ifndef _warlock_
#define _warlock_

#include <iostream>
#include <string>

#include "ASpell.hpp"
class ASpell;

class Warlock
{
	private:
		std::string spell;
		std::string name;
		std::string title;
		Warlock(const Warlock& obj);
		Warlock& operator=(const Warlock& obj);
		Warlock();
	public:
		Warlock(const std::string& name_, const std::string& title_);
		~Warlock();

		void introduce() const;
		const std::string& getSpell() const;
		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& str);

	public:
		void learnSpell(ASpell* obj);
		void forgetSpell(const std::string& str);
		void launchSpell(const std::string& str, ATarget& obj);
};

#endif
