#ifndef _CONCRETEPRODUCTB1_H_
#define _CONCRETEPRODUCTB1_H_

#include "abstractproductb.h"
#include <string>
class ConcreteProductB1 : public AbstractProductB {
    public:
        virtual std::string UsefulFunctionB() const override;
};

#endif
