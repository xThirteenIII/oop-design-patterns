#ifndef _CONCRETESTRATEGYA_H_
#define _CONCRETESTRATEGYA_H_

#include "strategy.h"
#include <string>
#include <string_view>

class ConcreteStrategyA: public Strategy{
public:
    std::string doAlgorithm(std::string_view data) const override;

};

#endif

