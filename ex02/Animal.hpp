#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected :
        std::string Type;
    public :
        virtual ~AAnimal();
        AAnimal();
        AAnimal& operator=(const AAnimal & rhs);
        AAnimal(const AAnimal& rhs);
        std::string getType() const;
        virtual void makeSound() const = 0;
};

class Dog : public AAnimal {
    private :
        Brain* b;
    public :
        ~Dog();
        Dog();
        Dog& operator=(const Dog & rhs);
        Dog(const Dog& rhs);
        void makeSound() const;
        void compare(Dog const & other_dog) const;
};

class Cat : public AAnimal {
    private :
        Brain* b;
    public :
        ~Cat();
        Cat();
        Cat& operator=(const Cat & rhs);
        Cat(const Cat& rhs);
        void makeSound() const;
};