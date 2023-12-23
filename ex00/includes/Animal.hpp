#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED "\033[31m"
# define ORANGE "\033[38;5;208m"
# define YELLOW "\033[33m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define PINK "\033[38;5;219m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& src);
		virtual ~Animal(); // virtual destructor　is needed to avoid memory leak
		Animal& operator=(const Animal& src);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif