#include "creator.h"
#include "product.h"

Creator::~Creator(){};

std::string Creator::SomeOperation() const {

    // Call the factory method to create a Product object
    Product* product = this ->FactoryMethod();

    // Now use the product
    std::string result = "Creator: the same creator's code has worked with " + product->Operation();
    delete product;
    return result; 
}
