#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>

enum Size { TALL, GRANDE, VENTI };

class Beverage
{
protected:
    std::string m_description = std::string("Unknown Beverage");
    Size m_size = Size::TALL;
public:
    Beverage(){}
    virtual ~Beverage(){}
    virtual std::string getDescription() const { return m_description; }
    virtual double cost() const = 0;

    void setSize(Size size) { m_size = size; }
    virtual Size getSize() const { return m_size; }
};

#endif