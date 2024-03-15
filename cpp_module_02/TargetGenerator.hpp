#ifndef TARGET_GENERATOR_HPP
#define TARGET_GENERATOR_HPP

# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & targetName);
		ATarget* createTarget(std::string const & targetName);

	private:
		TargetGenerator(const TargetGenerator &copy_src);
		TargetGenerator &operator=(const TargetGenerator &rhs);

		std::map<std::string, ATarget*> targetBook;
};

#endif