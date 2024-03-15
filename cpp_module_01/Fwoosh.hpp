#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();//まずはvirtualつけて試す
		
		virtual ASpell*	clone() const;//Aspellのコピペ。オーバーロード上書きのイメージ
};

#endif
