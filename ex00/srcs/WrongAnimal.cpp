#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN << "WrongAnimal constructor called." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	std::cout << GREEN << "WrongAnimal copy constructor called." << RESET << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal destructor called." << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	std::cout << GREEN << "WrongAnimal assignation operator called." << RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << PURPLE << "WrongAnimal makes sound." << RESET << std::endl;
}