#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << GREEN << "Brain constructor called." << RESET << std::endl;
}

Brain::Brain(const Brain& src) {
	std::cout << GREEN << "Brain copy constructor called." << RESET << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << RED << "Brain destructor called." << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& src) {
	std::cout << GREEN << "Brain assignation operator called." << RESET << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

void Brain::setBrainAll(std::string idea) {
	for (int i = 0; i < 100; i++)
		setIdea(i, idea);
}

const std::string &Brain::getIdea(size_t index) const {
	return this->ideas[index];
}