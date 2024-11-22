#ifndef _Spellbook_
#define _Spellbook_


class Spellbook
{
    private:
        Spellbook(const Spellbook& obj);
        Spellbook& operator=(const Spell& obj);
    public:
        ~Spellbook();
        Spellbook();
        void learnSpell(ASpell* obj);
        void forgetSpell(string const& obj);
        ASpell* createSpell(string const& obj);

};

#endif