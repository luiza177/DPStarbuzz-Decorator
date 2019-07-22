#ifndef STEAMEDMILK_H
#define STEAMEDMILK_H
#include "Raw/CondimentDecorator.h"

class SteamedMilk : public CondimentDecorator
{
public:
    SteamedMilk(Beverage* beverage) : CondimentDecorator(beverage) {/*  std::cout << "Latte constructor\n";  */}
    virtual ~SteamedMilk()
    {
        // std::cout << "Latte destructor\n";
        delete m_beverage;
    }
    std::string getDescription() const override { return m_beverage->getDescription() + ", Latte"; }
    double cost() const override
    {
        auto cost = m_beverage->cost();
        auto size = m_beverage->getSize();
        switch (size)
        {
            case Size::TALL:
                cost += .10;
                break;
            case Size::GRANDE:
                cost += .10;
                break;
            case Size::VENTI:
                cost += .15;
                break;
        }
        return cost;
    }
};
#endif