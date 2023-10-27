#ifndef _CONCRETESTRATEGYB_H_
#define _CONCRETESTRATEGYB_H_

#include "strategy.h"
#include <string>
#include <string_view>

class ConcreteStrategyB: public Strategy{
public:
    std::string doAlgorithm(std::string_view data) const override;

};

#endif
