#ifndef DARKROAST_H
#define DARKROAST_H
#include "Raw/Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        // std::cout << "DarkRoast constructor\n";
        m_description = "Dark Roast";
    }
    virtual ~DarkRoast(){/*  std::cout << "DarkRoast destructor\n";  */}

    double cost() const override { return 0.99; }
};
#endif