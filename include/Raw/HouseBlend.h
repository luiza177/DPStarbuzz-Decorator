#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Raw/Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        // std::cout << "HouseBlend constructor\n"; 
        m_description = "House Blend of Coffee";
    }
    virtual ~HouseBlend(){/*  std::cout << "HouseBlend destructor\n";  */}

    double cost() const override { return 0.89; }
};
#endif