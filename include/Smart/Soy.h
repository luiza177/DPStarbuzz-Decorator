#ifndef SOY_H
#define SOY_H
#include "Smart/CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(std::shared_ptr<Beverage> beverage) : CondimentDecorator(beverage) {}
    virtual ~Soy() {}
    std::string getDescription() const override { return m_beverage->getDescription() + ", Soy"; }
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
                cost += .15;
                break;
            case Size::VENTI:
                cost += .20;
                break;
        }
        return cost;
    }
};
#endif