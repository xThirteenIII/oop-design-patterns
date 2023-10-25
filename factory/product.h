#ifndef _PRODUCT_H
#define _PRODUCT_H
#include <iostream>
#include <string>

/**
 * The Product interface declares the operations that all concrete products must
 * implement.
 */

// Kinda like a go interface{}
class Product{
public:
    // Deconstructor
    virtual ~Product();

    // Note to self:
    // In C++, if you declare a function as pure virtual in the header file (with = 0), 
    // you must also provide a definition for it in the source file. 
    // You cannot declare a function as pure virtual in the header file and then provide the implementation in the source file. 
    // This is because pure virtual functions are meant to be overridden by derived classes, and the base class must provide a method body for them.
    //
    // As a result of declaring a function as a pure virtual function:
    // The base class cannot be instantiated directly; it becomes an abstract base class.
    // Derived classes are required to provide their own implementations for the pure virtual function, or they also become abstract classes
    //
    virtual std::string Operation() const = 0;
};
#endif
