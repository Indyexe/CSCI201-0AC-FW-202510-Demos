#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <sstream>

class Person
{
public:
    Person(std::string name, int age);
    std::string getName();
    void setName(std::string n);
    int getAge();
    void setAge(int a);
    std::string greet();

private:
    std::string name;
    int age;
};
#endif