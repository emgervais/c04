#include <iostream>

class WrongAnimal {
    protected :
        std::string Type;
    public :
        ~WrongAnimal();
        WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal & rhs);
        WrongAnimal(const WrongAnimal& rhs);
        std::string getType() const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public :
        ~WrongCat();
        WrongCat();
        WrongCat& operator=(const WrongCat & rhs);
        WrongCat(const WrongCat& rhs);
        void makeSound() const;
};