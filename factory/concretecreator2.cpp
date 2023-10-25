#include "concreteproduct2.h"
#include "product.h"
#include "concretecreator2.h"
#include <string>

Product* ConcreteCreator2::FactoryMethod() const {
    return new ConcreteProduct2();
}
