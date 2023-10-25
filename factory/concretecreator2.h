#ifndef _CONCRETECREATOR2_H_
#define _CONCRETECREATOR2_H_

#include "creator.h"
class ConcreteCreator2 : public Creator {
 public:
  Product* FactoryMethod() const;
};

#endif
