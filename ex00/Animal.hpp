#include <iostream>

class Animal {
    protected :
        std::string Type;
    public :
        virtual ~Animal();
        Animal();
        Animal& operator=(const Animal & rhs);
        Animal(const Animal& rhs);
        std::string getType() const;
        virtual void makeSound() const;
};

class Dog : public Animal {

    public :
        ~Dog();
        Dog();
        Dog& operator=(const Dog & rhs);
        Dog(const Dog& rhs);
        void makeSound() const;
};

class Cat : public Animal {

    public :
        ~Cat();
        Cat();
        Cat& operator=(const Cat & rhs);
        Cat(const Cat& rhs);
        void makeSound() const;
};