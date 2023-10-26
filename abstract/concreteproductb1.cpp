#include "concreteproductb1.h"
#include "abstractproducta.h"

std::string ConcreteProductB1::UsefulFunctionB() const{
    return "{The result of product B1}";
}
  /**
   * The variant, Product B1, is only able to work correctly with the variant,
   * Product A1. Nevertheless, it accepts any instance of AbstractProductA as an
   * argument.
   */
std::string ConcreteProductB1::AnotherUsefulFunctionB(const AbstractProductA &collaborator) const {
    const std::string result = collaborator.UsefulFunctionA();
    return "The result of B1 collaboratin with ( " + result + " )";
}
