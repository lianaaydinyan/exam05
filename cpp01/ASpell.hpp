#ifndef _aspell_
#define _aspell_


#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		void launch(const ATarget& obj);
		ASpell(std::string& name_, std::string& effects_);
		std::string& getName() const;
		std::string& getEffects() const;
		virtual ASpell* clone() const = 0;
};



#endif