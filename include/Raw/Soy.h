#ifndef SOY_H
#define SOY_H
#include "Raw/CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage* beverage) : CondimentDecorator(beverage) {/*  std::cout << "Soy constructor\n";  */}
    virtual ~Soy()
    {
        // std::cout << "Soy destructor\n";
        delete m_beverage;
    }
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