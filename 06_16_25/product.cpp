#include "product.h"

int product::numProducts = 0;
product::product(int pn, std::string desc, double p)
{
    numProducts++;
    if (pn <= 0)
    {
        std::cout << "Not a valid product number. Setting the product number to " << 100 + numProducts << std::endl;
        pn = 100 + numProducts;
    }
    prodNum = pn;
    setPrice(p);
    setDescription(desc);
}
double product::getPrice() const
{
    return price;
}
std::string product::getDescription() const
{
    return description;
}
int product::getProdNum() const
{
    return prodNum;
}
void product::setPrice(double p)
{
    if (p <= 0)
    {
        p = fabs(p);
    }
    price = p;
}
void product::setDescription(std::string desc)
{
    description = desc;
}
std::string product::tostring()
{
    std::string output;
    output += "Product Number: " + std::to_string(prodNum);
    output += "  Description: " + description;
    output += "  Price: $" + std::to_string(price);
    return output;
}