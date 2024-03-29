#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball;

class Fireball : public ASpell
{
	public:
		Fireball();
		virtual ~Fireball();

		virtual ASpell* clone(void) const;
};

#endif