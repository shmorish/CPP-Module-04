#include "../includes/Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "Animal constructor called." << RESET << std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout << GREEN << "Animal copy constructor called." << RESET << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << RED << "Animal destructor called." << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
	std::cout << GREEN << "Animal assignation operator called." << RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << PURPLE << "Animal makes sound." << RESET << std::endl;
}

