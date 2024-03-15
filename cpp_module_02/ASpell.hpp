#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"//Aspellとatargetはセットでつくれ

class ATarget;

class ASpell
{
	protected :
		std::string name;
		std::string effects;

	public:
		ASpell(void);
		ASpell(const ASpell &copy_src);
		ASpell &operator=(const ASpell &rhs);
		virtual ~ASpell(void);//抽象クラスだから継承前提＝virtualのイメージ

		ASpell(const std::string &name, const std::string &effects);
		const std::string&	getName() const;
		const std::string&	getEffects() const;
		virtual ASpell* clone() const = 0;
		void	launch(const ATarget &target) const;
};

#endif
