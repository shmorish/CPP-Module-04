#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << GREEN << "Cat constructor called." << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& src) {
	std::cout << GREEN << "Cat copy constructor called." << RESET << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	std::cout << GREEN << "Cat assignation operator called." << RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << PURPLE << "Meow~" << RESET << std::endl;
}