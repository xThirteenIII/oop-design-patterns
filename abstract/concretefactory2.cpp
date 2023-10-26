#include "concretefactory2.h"
#include "abstractproducta.h"
#include "concreteproducta2.h"
#include "concreteproductb2.h"

AbstractProductA* ConcreteFactory2::CreateProductA() const{
    return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB() const{
    return new ConcreteProductB2();
}
