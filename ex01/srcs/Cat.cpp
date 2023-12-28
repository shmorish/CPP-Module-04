#include "../includes/Cat.hpp"

Cat::Cat() {
	std::cout << GREEN << "Cat constructor called." << RESET << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat's brain address: " << this->brain << std::endl;
}

Cat::Cat(const Cat& src) {
	std::cout << GREEN << "Cat copy constructor called." << RESET << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat& src) {
	std::cout << GREEN << "Cat assignation operator called." << RESET << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << PURPLE << "Meow~" << RESET << std::endl;
}