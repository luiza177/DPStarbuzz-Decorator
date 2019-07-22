#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Smart/Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        m_description = "House Blend of Coffee";
    }
    virtual ~HouseBlend(){}

    double cost() const override { return 0.89; }
};
#endif