#include "concreteproduct1.h"
#include "product.h"
#include "concretecreator1.h"
#include <string>

Product* ConcreteCreator1::FactoryMethod() const {
    return new ConcreteProduct1();
}
