#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::TargetGenerator(const TargetGenerator &copy_src)
{
	*this = copy_src;
}

TargetGenerator	&TargetGenerator::operator=(const TargetGenerator &rhs)
{
	this->targetBook = rhs.targetBook;
	return (*this);
}

TargetGenerator::~TargetGenerator(void)//なしでいってみる
{
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
	{
		targetBook[target->getType()] = target;
	}
}

void	TargetGenerator::forgetTargetType(std::string const & targetName)
{
	if (targetBook.find(targetName) != targetBook.end())
		targetBook.erase(targetBook.find(targetName));//itの代わり
}

ATarget*	TargetGenerator::createTarget(std::string const & targetName)
{
	if (targetBook.find(targetName) != targetBook.end())
		return (targetBook[targetName]);
	return (NULL);
}
