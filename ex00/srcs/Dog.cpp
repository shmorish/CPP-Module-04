#include "../includes/Dog.hpp"

Dog::Dog() {
	std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& src) {
	std::cout << GREEN << "Dog copy constructor called." << RESET << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << RED << "Dog destructor called." << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	std::cout << GREEN << "Dog assignation operator called." << RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << PURPLE << "Woof~" << RESET << std::endl;
}