#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	public:
		~Warlock(void);//まずいつもの４つはかいとけ。cppにも

		Warlock(const std::string &name, const std::string &title);
		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void	setTitle(const std::string &str);
		void	introduce() const;

	private:
		Warlock(void);
		Warlock(const Warlock &copy_src);
		Warlock &operator=(const Warlock &rhs);

		std::string name;
		std::string title;
};

#endif
