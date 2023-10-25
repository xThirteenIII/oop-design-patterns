#ifndef _CONCRETEPRODUCTB2_H_
#define _CONCRETEPRODUCTB2_H_

#include "abstractproductb.h"
#include <string>
class ConcreteProductB2 : public AbstractProductB {
    public:
        virtual std::string UsefulFunctionB() const override;
};
#endif
