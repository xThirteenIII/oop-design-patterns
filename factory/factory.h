#ifndef _FACTORY_H_
#define _FACTORY_H_
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

    // Method
    virtual std::string Operation() const;
};

/**
 * Concrete Products provide various implementations of the Product interface.
 */
class ConcreteProduct1 : public Product {
 public:
  std::string Operation() const;
};

class ConcreteProduct2 : public Product {
 public:
  std::string Operation() const;
};

/**
 * The Creator class declares the factory method that is supposed to return an
 * object of a Product class. The Creator's subclasses usually provide the
 * implementation of this method.
 */
class Creator{
public:
    // Constructor
    virtual ~Creator();
    virtual Product* FactoryMethod() const;

 /**
   * Also note that, despite its name, the Creator's primary responsibility is
   * not creating products. Usually, it contains some core business logic that
   * relies on Product objects, returned by the factory method. Subclasses can
   * indirectly change that business logic by overriding the factory method and
   * returning a different type of product from it.
   */

    std::string SomeOperation() const;
};

/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */
class ConcreteCreator1 : public Creator {
  /**
   * Note that the signature of the method still uses the abstract product type,
   * even though the concrete product is actually returned from the method. This
   * way the Creator can stay independent of concrete product classes.
   * Product* not ConcreteProduct1* !!
   */
 public:
  Product* FactoryMethod() const; 
};

class ConcreteCreator2 : public Creator {
 public:
  Product* FactoryMethod() const;
};
#endif
