#ifndef DECAF_H
#define DECAF_H
#include "Raw/Beverage.h"

class Decaf : public Beverage
{
public:
    Decaf()
    {
        // std::cout << "Decaf constructor\n";
        m_description = "Decaf";
    }
    virtual ~Decaf(){/*  std::cout << "Decaf destructor\n";  */}

    double cost() const override { return 1.05; }
};
#endif