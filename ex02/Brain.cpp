#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; ++i)
        ideas[i] = "Miam";
    std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain & rhs) {
    for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
}

Brain& Brain::operator=(const Brain& rhs) {
    if(this != &rhs)
        for(int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    return *this;
}
