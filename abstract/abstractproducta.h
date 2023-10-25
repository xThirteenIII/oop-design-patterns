/**
 * Each distinct product of a product family should have a base interface. All
 * variants of the product must implement this interface.
 */
#ifndef _ABSTRACTPRODUCTA_H_
#define _ABSTRACTPRODUCTA_H_

#include <iostream>

class AbstractProductA{
    public:
        virtual ~AbstractProductA(){};
        virtual std::string UsefulFunctionA() const = 0;
};

#endif
