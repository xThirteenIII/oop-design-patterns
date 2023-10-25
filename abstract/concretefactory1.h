#ifndef _CONCRETEFACTORY1_H_
#define _CONCRETEFACTORY1_H_

#include "abstractfactory.h"
#include "abstractproducta.h"

/**
 * Each Concrete Factory has a corresponding product variant.
 */
class ConcreteFactory1 : public AbstractFactory {
    public:
        AbstractProductA* CreateProductA() const override;
        AbstractProductB* CreateProductB() const override;

};

#endif
