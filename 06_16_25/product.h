#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
#include <cmath>
#include "person.h"

class product
{
public:
    product(int pn, std::string desc, double p);
    double getPrice() const;
    std::string getDescription() const;
    int getProdNum() const;
    void setPrice(double p);
    void setDescription(std::string desc);
    std::string tostring() const;

protected:
    double price;
    std::string description;
    int prodNum;
    static int numProducts;
    Person customer;
};

#endif