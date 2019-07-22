#ifndef EXPRESSO_H
#define EXPRESSO_H

#include "Raw/Beverage.h"

class Expresso : public Beverage
{
public:
    Expresso()
    {
        // std::cout << "Expresso constructor\n";
        m_description = "Expresso";
    }
    virtual ~Expresso(){/*  std::cout << "Expresso destructor\n";  */}

    double cost() const override { return 1.99; }
};
#endif