#ifndef _atarget_
#define _atarget_


#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget(std::string type_);
		const std::string& getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell& obj);
};

#endif