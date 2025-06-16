#ifndef DRINK_H
#define DRINK_H
#include <string>
#include <sstream>
#include "product.h"

enum class flavType
{
    ALMOND,
    APPLE,
    BLUEBERRY,
    BUTTERPECAN,
    CARAMEL,
    FRENCHVANILLA,
    PEACH,
    PEPPERMINT,
    RASPBERRY,
    STRAWBERRY,
    MOCHA

};

enum class sizeType
{
    SMALL,
    MED,
    LARGE
};

const int NUM_FLAV = 11;

class drink : public product
{
public:
    drink(bool c, bool h, sizeType s, flavType f[], int numF, int pn, std::string desc);
    bool isCoffee() const;
    bool isHot() const;
    sizeType getSize() const;
    std::string getFlavors() const;
    void setCoffee(bool c);
    void setHot(bool h);
    void setSize(sizeType s);
    void setFlavors(flavType f[], int numF);
    double getPrice() const;
    std::string toString() const;
    static std::string flavToStr[NUM_FLAV];

private:
    bool coffee;
    bool hot;
    sizeType size;
    flavType flavors[NUM_FLAV];
    int numFlavor;
};

#endif