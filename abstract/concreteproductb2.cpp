#include "concreteproductb2.h"
#include <string>

std::string ConcreteProductB2::UsefulFunctionB() const{
    return "{The result of product B2}";
}

std::string ConcreteProductB2::AnotherUsefulFunctionB(const AbstractProductA &collaborator) const {
    const std::string result = collaborator.UsefulFunctionA();
    return "The result of B2 collaboratin with ( " + result + " )";
}
