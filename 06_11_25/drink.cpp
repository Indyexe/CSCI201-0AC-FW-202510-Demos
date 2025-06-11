#include "drink.h"

std::string drink::flavToStr[] = {"Almond",
                                  "Apple",
                                  "Blueberry",
                                  "Butter Pecan",
                                  "Caramel",
                                  "French Vanilla",
                                  "Peach",
                                  "Peppermint",
                                  "Raspberry",
                                  "Strawberry",
                                  "Mocha"};
drink::drink(bool c, bool h, sizeType s, flavType f[], int numF)
{
    setCoffee(c);
    setHot(h);
    setSize(s);
    setFlavors(f, numF);
}
bool drink::isCoffee() const
{
    return coffee;
}
bool drink::isHot() const
{
    return hot;
}
sizeType drink::getSize() const
{
    return size;
}
std::string drink::getFlavors() const
{
    std::ostringstream out;
    if (numFlavor > 0)
    {
        out << flavToStr[static_cast<int>(flavors[0])];
        for (int i = 1; i < numFlavor; i++)
        {
            out << ", " << flavToStr[static_cast<int>(flavors[i])];
        }
    }
    return out.str();
}
void drink::setCoffee(bool c)
{
    coffee = c;
}
void drink::setHot(bool h)
{
    hot = h;
}
void drink::setSize(sizeType s)
{
    size = s;
}
void drink::setFlavors(flavType f[], int numF)
{
    if (numF > NUM_FLAV)
    {
        numF = NUM_FLAV;
    }
    for (int i = 0; i < numF; i++)
    {
        flavors[i] = f[i];
    }
    numFlavor = numF;
}
double drink::getPrice() const
{
}

std::string drink::toString() const
{
    std::ostringstream out;
    out << "Is Coffee? ";
    out << "Is Hot? ";
    out << "Size: ";
    out << "Flavors: " << getFlavors() << " ";
    return out.str();
}