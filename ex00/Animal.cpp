#include "Animal.hpp"

Animal::Animal() : Type("animal") {
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "animal destructor" << std::endl;
}

Animal::Animal(const Animal & rhs) {
    if(this != &rhs)  {
{
}

Animal& Animal::operator=(const Animal& rhs) {
    if(this != &rhs) {
{ 
    return *this;
}

void Animal::makeSound() const {
    std::cout << "GRR" << std::endl;
}

std::string Animal::getType() const {
    return this->Type;
}

//---------------------------------

Dog::Dog() {
    this->Type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog & rhs) {
    if(this != &rhs)  {
{
}

Dog& Dog::operator=(const Dog& rhs) {
    if(this != &rhs)  {
{
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Wouf" << std::endl;
}


//------------------------------

Cat::Cat() {
    this->Type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat & rhs) {
    if(this != &rhs)  {
{
}

Cat& Cat::operator=(const Cat& rhs) {
    if(this != &rhs)  {
{
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaw" << std::endl;
}
