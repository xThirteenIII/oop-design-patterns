#ifndef _CONCRETECREATOR1_H_
#define _CONCRETECREATOR1_H_

#include "creator.h"

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
  Product* FactoryMethod() const override; 
};

#endif
