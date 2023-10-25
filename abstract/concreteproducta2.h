#ifndef _CONCRETEPRODUCTA2_H_
#define _CONCRETEPRODUCTA2_H_

#include "abstractproducta.h"


/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ConcreteProductA2 : public AbstractProductA{
    public:
        std::string UsefulFunctionA() const override;
};

#endif
