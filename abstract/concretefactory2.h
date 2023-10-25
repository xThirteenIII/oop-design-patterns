#ifndef _CONCRETEFACTORY2_H_
#define _CONCRETEFACTORY2_H_

#include "abstractfactory.h"

/**
 * Each Concrete Factory has a corresponding product variant.
 */
class ConcreteFactory2 : public AbstractFactory {
    public:
        AbstractProductA* CreateProductA() const override;
        AbstractProductB* CreateProductB() const override;

};

#endif
