#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string type;

	public:
		ATarget(void);
		ATarget(const ATarget &copy_src);
		ATarget &operator=(const ATarget &rhs);
		virtual ~ATarget(void);

		ATarget(const std::string &type);
		const std::string&	getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(const ASpell &spell) const;

};

#endif