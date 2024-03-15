#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

SpellBook::SpellBook(const SpellBook &copy_src)
{
	*this = copy_src;
}

SpellBook	&SpellBook::operator=(const SpellBook &rhs)
{
	this->book = rhs.book;
	return (*this);
}

SpellBook::~SpellBook(void)//なしでいってみる
{
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		book[spell->getName()] = spell->clone();//Warlockのやつ
	}
}

void	SpellBook::forgetSpell(std::string const & SpellName)
{
	if (book.find(SpellName) != book.end())
		book.erase(book.find(SpellName));
}

ASpell*	SpellBook::createSpell(std::string const & SpellName)
{
	std::map<std::string, ASpell*>::iterator it = book.find(SpellName);
	if (book.find(SpellName) != book.end())
		return (book[SpellName]);
	return (NULL);
}
