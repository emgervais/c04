#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type("WrongAnimal") {
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & rhs) {
    this->Type = rhs.Type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    this->Type = rhs.Type;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong GRR" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->Type;
}

WrongCat::WrongCat() {
    this->Type = "WrongCat";
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat & rhs) {
    *this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    this->Type = rhs.Type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Miaw" << std::endl;
}