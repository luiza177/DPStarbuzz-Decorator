#include <iostream>
#include "Smart/DarkRoast.h"
#include "Smart/Decaf.h"
#include "Smart/Expresso.h"
#include "Smart/HouseBlend.h"
#include "Smart/Mocha.h"
#include "Smart/Soy.h"
#include "Smart/SteamedMilk.h"
#include "Smart/Whip.h"

int main(int argc, char const *argv[])
{
    std::shared_ptr<Beverage> beverage = std::make_shared<Expresso>();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    std::shared_ptr<Beverage> beverage2 = std::make_shared<DarkRoast>();
    beverage2 = std::make_shared<Mocha>(Mocha(beverage2));
    beverage2 = std::make_shared<Mocha>(Mocha(beverage2));
    beverage2 = std::make_shared<Whip>(Whip(beverage2));
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
    beverage3 = std::make_shared<Soy>(Soy(beverage3));
    beverage3 = std::make_shared<SteamedMilk>(SteamedMilk(beverage3));
    beverage3 = std::make_shared<Whip>(Whip(beverage3));
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;

    return 0;
}
