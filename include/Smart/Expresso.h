#ifndef EXPRESSO_H
#define EXPRESSO_H
#include "Smart/Beverage.h"

class Expresso : public Beverage
{
public:
    Expresso()
    {
        m_description = "Expresso";
    }
    virtual ~Expresso(){}

    double cost() const override { return 1.99; }
};
#endif