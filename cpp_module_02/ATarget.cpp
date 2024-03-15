#include "ATarget.hpp"

ATarget::ATarget(void)
{
}

ATarget::ATarget(const ATarget &copy_src)
{
	*this = copy_src;
}

ATarget	&ATarget::operator=(const ATarget &rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget(void)
{
}

ATarget::ATarget(const std::string &type)
{
	this->type = type;
}

const std::string& ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
