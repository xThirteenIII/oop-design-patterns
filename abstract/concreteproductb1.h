#ifndef _CONCRETEPRODUCTB1_H_
#define _CONCRETEPRODUCTB1_H_

#include "abstractproducta.h"
#include "abstractproductb.h"
#include <string>
class ConcreteProductB1 : public AbstractProductB {
    public:
        std::string UsefulFunctionB() const override;

     /**
       * The variant, Product B1, is only able to work correctly with the variant,
       * Product A1. Nevertheless, it accepts any instance of AbstractProductA as an
       * argument.
       */
        std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override;
};


#endif
