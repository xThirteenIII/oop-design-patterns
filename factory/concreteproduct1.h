#ifndef _CONCRETEPRODUCT1_H_
#define _CONCRETEPRODUCT1_H_

#include "product.h"

/**
 * Concrete Products provide various implementations of the Product interface.
 */
class ConcreteProduct1 : public Product {
 public:
  std::string Operation() const override;
};
#endif
