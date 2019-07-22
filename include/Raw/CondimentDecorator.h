#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "Raw/Beverage.h"

class CondimentDecorator : public Beverage
{
protected:
    Beverage* m_beverage = nullptr;
public:
    CondimentDecorator(Beverage* beverage) : m_beverage(beverage) {/*  std::cout << "CondimentDec constructor\n";  */}
    virtual ~CondimentDecorator() {/*  std::cout << "CondimentDec destructor\n";  */}

    Size getSize() const override { m_beverage->getSize(); }
};
#endif