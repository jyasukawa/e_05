#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

# include <map>
# include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & SpellName);
		ASpell*	createSpell(std::string const & SpellName);

	private:
		SpellBook(const SpellBook &copy_src);
		SpellBook &operator=(const SpellBook &rhs);

		std::map<std::string, ASpell*> book;
};

#endif
