#ifndef _fireball_
#define _fireball_

#include "ASpell.hpp"

class ASpell;
class Fireball : public ASpell
{
    public:
        Fireball();
        ~Fireball();
        ASpell* clone() const;
};

#endif