#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN << "WrongCat constructor called." << RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) {
	std::cout << GREEN << "WrongCat copy constructor called." << RESET << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << RED << "WrongCat destructor called." << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	std::cout << GREEN << "WrongCat assignation operator called." << RESET << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << PURPLE << "WrongCat makes sound." << RESET << std::endl;
}

