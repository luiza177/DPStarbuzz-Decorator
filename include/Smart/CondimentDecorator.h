#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include <memory>
#include "Smart/Beverage.h"

class CondimentDecorator : public Beverage
{
protected:
    std::shared_ptr<Beverage> m_beverage = nullptr;
public:
    CondimentDecorator(std::shared_ptr<Beverage> beverage) : m_beverage(beverage) {}
    virtual ~CondimentDecorator(){}

    Size getSize() const override { m_beverage->getSize(); }
};
#endif