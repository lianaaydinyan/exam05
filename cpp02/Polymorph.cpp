#include "Polymorph.hpp"



Polymorph::Polymorph() : ASpell("Polymorph", "turned intp a critter") {}
Polymorph::~Polymorph() {}
ASpell* Polymorph::clone() const
{
    Polymorph* obj = new Polymorph();
    return obj;
}