#include <iostream>
#include <string>

class Animal
{
protected:
    std::string name;
    std::string type;
    double age;
    std::string breed;
public:
    Animal(const std::string& name, const std::string& type, double age, const std::string& desc) : 
        name{ name }, type{ type }, age{ age }, breed{ breed } {}
    virtual void print()
    {
        std::cout << name << std::endl;
        std::cout << type << std::endl;
        std::cout << age << " y/o" << std::endl;
        std::cout << breed;
    }
};
class Cat : public Animal
{
private:
    bool vacc;
public:
    Cat(const std::string& name, double age, const std::string& breed, bool vacc) :
        Animal{ name, "Cat", age, breed }, vacc{vacc} {}
    void print() override
    {
        Animal::print();
        if (vacc == true)
        {
            std::cout << type << " is vaccinated" << std::endl;
        }
        else
        {
            std::cout << type << " is not vaccinated" << std::endl;
        }
    }
};
class Dog : public Animal
{
private:
    bool vacc;
public:
    Dog(const std::string& name, double age, const std::string& breed, bool vacc) :
        Animal{ name, "Dog", age, breed }, vacc{ vacc } {}
    void print() override
    {
        Animal::print();
        if (vacc == true)
        {
            std::cout << type << " is vaccinated" << std::endl;
        }
        else
        {
            std::cout << type << " is not vaccinated" << std::endl;
        }
    }
};
class Parrot : public Animal
{
private:
    bool vacc;
public:
    Parrot(const std::string& name, double age, const std::string& breed, bool vacc) :
        Animal{ name, "Parrot", age, breed }, vacc{vacc} {}
    void print() override
    {
        Animal::print();
        if (vacc == true)
        {
            std::cout << type << " is vaccinated" << std::endl;
        }
        else
        {
            std::cout << type << " is not vaccinated" << std::endl;
        }
    }
};


int main()
{
    Cat cat("Tyson", 3.4, "Siamese", true);
    Dog dog("Mira", 7.0, "Pug", true);
    Parrot parrot("Sunny", 2.2, "Budgerigar", false);
    cat.print();
    std::cout << std::endl;
    dog.print();
    std::cout << std::endl;
    parrot.print();
}