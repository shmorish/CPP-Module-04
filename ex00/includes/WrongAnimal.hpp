#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& src);
		std::string getType() const;
		void makeSound() const; // <- no virtual
};

#endif