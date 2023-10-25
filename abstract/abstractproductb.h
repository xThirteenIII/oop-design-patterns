#ifndef _ABSTRACTPRODUCTB_H_
#define _ABSTRACTPRODUCTB_H_

#include <iostream>

class AbstractProductB{
    public:
        virtual ~AbstractProductB(){};
        virtual std::string UsefulFunctionB() const = 0;
};
#endif
