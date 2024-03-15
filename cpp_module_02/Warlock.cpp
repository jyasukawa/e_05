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
	this->SpellBook.learnSpell(spell);
}


void	Warlock::forgetSpell(const std::string &SpellName)
{
	this->SpellBook.forgetSpell(SpellName);
}

void	Warlock::launchSpell(const std::string &SpellName, const ATarget &target)
{
	ASpell *tmp = this->SpellBook.createSpell(SpellName);
	if (tmp)
		tmp->launch(target);
}


// #include "Fireball.hpp"
// #include "TargetGenerator.hpp"
// #include "Polymorph.hpp"
// #include "BrickWall.hpp"
// int main()
// {
//   Warlock richard("Richard", "foo");
//   richard.setTitle("Hello, I'm Richard the Warlock!");
//   BrickWall model1;

//   Polymorph* polymorph = new Polymorph();
//   TargetGenerator tarGen;

//   tarGen.learnTargetType(&model1);
//   richard.learnSpell(polymorph);

//   Fireball* fireball = new Fireball();

//   richard.learnSpell(fireball);

//   ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

//   richard.introduce();
//   richard.launchSpell("Polymorph", *wall);
//   richard.launchSpell("Fireball", *wall);
// }

// c++ ASpell.cpp ATarget.cpp BrickWall.cpp Dummy.cpp Fireball.cpp Fwoosh.cpp Polymorph.cpp SpellBook.cpp TargetGenerator.cpp Warlock.cpp