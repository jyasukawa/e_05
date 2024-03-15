#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>

class Warlock
{
	public:
		~Warlock(void);

		Warlock(const std::string &name, const std::string &title);
		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void	setTitle(const std::string &str);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string &SpellName);
		void	launchSpell(const std::string &SpellName, const ATarget &target);

	private:
		Warlock(void);
		Warlock(const Warlock &copy_src);
		Warlock &operator=(const Warlock &rhs);

		std::string name;
		std::string title;
		std::map<std::string, ASpell *> book;
};

#endif