#ifndef DECAF_H
#define DECAF_H
#include "Smart/Beverage.h"

class Decaf : public Beverage
{
public:
    Decaf()
    {
        m_description = "Decaf";
    }
    virtual ~Decaf(){}

    double cost() const override { return 1.05; }
};
#endif