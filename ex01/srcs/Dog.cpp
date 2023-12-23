#include "../includes/Dog.hpp"

Dog::Dog() {
	std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
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

const std::string &Dog::getIdea(size_t index) const {
	return this->brain->getIdea(index);
}

void Dog::setIdea(size_t index, const std::string &idea) {
	this->brain->setIdea(index, idea);
}