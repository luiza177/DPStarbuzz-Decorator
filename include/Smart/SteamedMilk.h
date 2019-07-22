#ifndef STEAMEDMILK_H
#define STEAMEDMILK_H
#include "Smart/CondimentDecorator.h"

class SteamedMilk : public CondimentDecorator
{
public:
    SteamedMilk(std::shared_ptr<Beverage> beverage) : CondimentDecorator(beverage) {}
    virtual ~SteamedMilk() {}
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