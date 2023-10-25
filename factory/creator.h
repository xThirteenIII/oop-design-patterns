#ifndef _CREATOR_H_
#define _CREATOR_H_

#include "product.h"

/**
 * The Creator class declares the factory method that is supposed to return an
 * object of a Product class. The Creator's subclasses usually provide the
 * implementation of this method.
 */
class Creator{
public:
    // Constructor
    virtual ~Creator();
    virtual Product* FactoryMethod() const = 0;

 /**
   * Also note that, despite its name, the Creator's primary responsibility is
   * not creating products. Usually, it contains some core business logic that
   * relies on Product objects, returned by the factory method. Subclasses can
   * indirectly change that business logic by overriding the factory method and
   * returning a different type of product from it.
   */

    std::string SomeOperation() const;
};
#endif
