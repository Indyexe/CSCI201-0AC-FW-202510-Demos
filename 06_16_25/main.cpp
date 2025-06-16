#include <iostream>
#include "product.h"
#include "drink.h"

int main()
{
    flavType flavors[] = {flavType::BLUEBERRY, flavType::PEACH};
    drink newDrink(true, false, sizeType::MED, flavors, 2, 932, "Blueberry Peach Iced Coffee");
    std::cout << newDrink.toString() << std::endl;
}