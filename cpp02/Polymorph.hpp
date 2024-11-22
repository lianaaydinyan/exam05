#ifndef _polymorph_
#define _polymorph_

#include "ASpell.hpp"


class ASpell;
class Polymorph : public ASpell
{
    public:
        Polymorph();
        ~Polymorph();
        ASpell* clone() const;
};

#endif