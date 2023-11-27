#include "Animal.hpp"

AAnimal::AAnimal() : Type("Aanimal") {
    std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Aanimal destructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal & rhs) {
    *this = rhs;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
    if(this != &rhs)
        this->Type = rhs.Type;
    return *this;
}

void AAnimal::makeSound() const {
    std::cout << "GRR" << std::endl;
}

std::string AAnimal::getType() const {
    return this->Type;
}

//---------------------------------

Dog::Dog() : AAnimal() {
    Type = "Dog";
    b = new Brain();
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    delete b;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog & rhs) : AAnimal() {
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

void Dog::compare(Dog const & other_dog) const {
	std::cout << std::endl;
	std::cout << "1.address: " << static_cast<void*>(this->b) << std::endl;
	std::cout << "2.address: " << static_cast<void*>(other_dog.b) << std::endl;
}

//------------------------------

Cat::Cat() : AAnimal() {
    this->Type = "Cat";
    this->b = new Brain();
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete this->b;
}

Cat::Cat(const Cat & rhs) : AAnimal() {
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
