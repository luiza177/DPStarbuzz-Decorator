#ifndef DARKROAST_H
#define DARKROAST_H
#include "Smart/Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        m_description = "Dark Roast";
    }
    virtual ~DarkRoast(){}

    double cost() const override { return 0.99; }
};
#endif