#ifndef _CONCRETEPRODUCTA1_H_
#define _CONCRETEPRODUCTA1_H_

#include "abstractproducta.h"

/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ConcreteProductA1 : public AbstractProductA{
    public:
        std::string UsefulFunctionA() const override;
};

#endif
