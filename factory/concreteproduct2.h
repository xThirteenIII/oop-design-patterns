#ifndef _CONCRETEPRODUCT2_H_
#define _CONCRETEPRODUCT2_H_

#include "product.h"

/**
 * Concrete Products provide various implementations of the Product interface.
 */
class ConcreteProduct2 : public Product {
 public:
  std::string Operation() const override;
};
#endif
