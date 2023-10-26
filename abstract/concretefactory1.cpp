#include "concretefactory1.h"
#include "abstractproducta.h"
#include "concreteproducta1.h"
#include "concreteproductb1.h"

AbstractProductA* ConcreteFactory1::CreateProductA() const {
   return new ConcreteProductA1(); 
}

AbstractProductB* ConcreteFactory1::CreateProductB() const {
   return new ConcreteProductB1();
}
