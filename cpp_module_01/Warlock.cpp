#include "Warlock.hpp"

Warlock::Warlock(void)
{
}

Warlock::Warlock(const Warlock &copy_src)
{
	*this = copy_src;
}

Warlock	&Warlock::operator=(const Warlock &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string &str)
{
	this->title = str;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		if (book.find(spell->getName()) == book.end())
			book[spell->getName()] = spell->clone();
}


void	Warlock::forgetSpell(const std::string &SpellName)
{
	if (book.find(SpellName) != book.end())
		book.erase(book.find(SpellName));
}

void	Warlock::launchSpell(const std::string &SpellName, const ATarget &target)
{
	if (book.find(SpellName) != book.end())
		book[SpellName]->launch(target);
}



// #include "Fwoosh.hpp"
// #include "Dummy.hpp"
// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }

// c++ ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp Warlock.cpp