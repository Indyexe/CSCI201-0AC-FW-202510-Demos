#include "person.h"

void Person::setName(std::string n)
{
    name = n;
}

std::string Person::getName()
{
    return name;
}

void Person::setAge(int a)
{
    if (a < 0)
    {
        age = 0;
    }
    else
    {
        age = a;
    }
}

int Person::getAge()
{
    return age;
}

Person::Person(std::string n, int a)
{
    setName(n);
    setAge(a);
}

std::string Person::greet()
{
    std::ostringstream out;
    out << "Hello CSCI 201!" << std::endl;
    out << "My name is " << name << std::endl;
    return out.str();
}