#include "Animal.hpp"

Animal::Animal() : Type("animal") {
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "animal destructor" << std::endl;
}

Animal::Animal(const Animal & rhs) {
    *this = rhs;
}

Animal& Animal::operator=(const Animal& rhs) {
    this->Type = rhs.Type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "GRR" << std::endl;
}

std::string Animal::getType() const {
    return this->Type;
}

//---------------------------------

Dog::Dog() : Animal() {
    Type = "Dog";
    b = new Brain();
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    delete b;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog & rhs) : Animal() {
    b = new Brain(*rhs.b);
    *this = rhs;
}

Dog& Dog::operator=(const Dog& rhs) {
	if (this->b)
		delete (this->b);
	this->b = new Brain;
	this->Type = rhs.Type;
	return (*this);
}

void Dog::makeSound() const {
    std::cout << "Wouf" << std::endl;
}

//------------------------------

Cat::Cat() : Animal() {
    this->Type = "Cat";
    this->b = new Brain();
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete this->b;
}

Cat::Cat(const Cat & rhs) : Animal() {
    this->b = new Brain(*rhs.b);
    *this = rhs;
}

Cat& Cat::operator=(const Cat& rhs) {
	if (this->b)
		delete (this->b);
	this->b = new Brain;
	this->Type = rhs.Type;
	return (*this);
}

void Cat::makeSound() const {
    std::cout << "Miaw" << std::endl;
}

