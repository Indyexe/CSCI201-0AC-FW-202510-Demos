#include <iostream>
#include "product.h"
#include "drink.h"

// lecture activity: create a new derived class from product submit the h and cpp of your new class

int main()
{
    flavType flavors[] = {flavType::BLUEBERRY, flavType::PEACH};
    drink newDrink(true, false, sizeType::MED, flavors, 2, 932, "Blueberry Peach Iced Coffee");
    newDrink.getDescription();
    product p(323, "test", 1.0);

    std::cout << newDrink.toString() << std::endl;
}