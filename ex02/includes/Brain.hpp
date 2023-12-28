#ifndef BRAIN_HPP
# define BRAIN_HPP

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

class Brain {
	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain& operator=(const Brain& src);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
		void setBrainAll(std::string idea);
		const std::string &getIdea(size_t index) const;
	private:
		std::string ideas[100];
};

#endif