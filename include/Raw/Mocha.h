#ifndef MOCHA_H
#define MOCHA_H
#include "Raw/CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beverage) : CondimentDecorator(beverage) {/*  std::cout << "Mocha constructor\n";  */}
    virtual ~Mocha()
    {
        // std::cout << "Mocha destructor\n";
        delete m_beverage;
    }
    std::string getDescription() const override { return m_beverage->getDescription() + ", Mocha"; }
    double cost() const override 
    {
        auto cost = m_beverage->cost();
        auto size = m_beverage->getSize();
        switch (size)
        {
            case Size::TALL:
                cost += .15;
                break;
            case Size::GRANDE:
                cost += .20;
                break;
            case Size::VENTI:
                cost += .25;
                break;
        }
        return cost;
    }
};
#endif