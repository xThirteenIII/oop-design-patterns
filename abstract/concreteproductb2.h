#ifndef _CONCRETEPRODUCTB2_H_
#define _CONCRETEPRODUCTB2_H_

#include "abstractproductb.h"
#include <string>
class ConcreteProductB2 : public AbstractProductB {
    public:
        std::string UsefulFunctionB() const override;

     /**
       * The variant, Product B2, is only able to work correctly with the variant,
       * Product A2. Nevertheless, it accepts any instance of AbstractProductA as an
       * argument.
       */
        std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override;
};
#endif
