#include <iostream>

class Brain {
    protected:
        std::string ideas[100];
    public:
        ~Brain();
        Brain();
        Brain& operator=(const Brain & rhs);
        Brain(const Brain& rhs);
};