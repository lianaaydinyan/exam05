#ifndef _fwoosh_
#define _fwoosh_

#include "ASpell.hpp"

class ASpell;
class Fwoosh : public ASpell
{
	public:
		// Fwoosh* clone() override;
		~Fwoosh();
		Fwoosh();
		ASpell* clone() const;
};

#endif