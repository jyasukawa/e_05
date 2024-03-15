#include "ASpell.hpp"

ASpell::ASpell(void)
{
}

ASpell::ASpell(const ASpell &copy_src)
{
	*this = copy_src;
}

ASpell	&ASpell::operator=(const ASpell &rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

ASpell::~ASpell(void)
{
}

ASpell::ASpell(const std::string &name, const std::string &effects)
{
	this->name = name;
	this->effects = effects;
}

const std::string& ASpell::getName() const
{
	return (this->name);
}

const std::string& ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
