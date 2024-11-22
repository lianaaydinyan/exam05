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
		void launch(const ATarget& obj) const;
		ASpell(const std::string& name_,const std::string& effects_);
		const std::string& getName() const;
		const std::string& getEffects() const;
		virtual ASpell* clone() const = 0;
		virtual ~ASpell();
};



#endif