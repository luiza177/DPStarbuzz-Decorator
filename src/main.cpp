#include <iostream>
#include "Raw/DarkRoast.h"
#include "Raw/Decaf.h"
#include "Raw/Expresso.h"
#include "Raw/HouseBlend.h"
#include "Raw/Mocha.h"
#include "Raw/Soy.h"
#include "Raw/SteamedMilk.h"
#include "Raw/Whip.h"

int main(int argc, char const *argv[])
{
    Beverage* beverage = new Expresso();
    beverage->setSize(Size::TALL);
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    // std::cout << "...................................\n";
    delete beverage;

    Beverage* beverage2 = new DarkRoast();
    beverage2->setSize(Size::GRANDE);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;
    // std::cout << "...................................\n";
    delete beverage2;

    Beverage* beverage3 = new HouseBlend();
    beverage3->setSize(Size::VENTI);
    beverage3 = new Soy(beverage3);
    beverage3 = new SteamedMilk(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    delete beverage3;

    return 0;
}
