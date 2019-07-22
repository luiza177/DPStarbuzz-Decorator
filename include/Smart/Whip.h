#ifndef WHIP_H
#define WHIP_H

#include "Smart/CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
    Whip(std::shared_ptr<Beverage> beverage) : CondimentDecorator(beverage) {}
    virtual ~Whip() {}
    std::string getDescription() const override { return m_beverage->getDescription() + ", Whip"; }
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