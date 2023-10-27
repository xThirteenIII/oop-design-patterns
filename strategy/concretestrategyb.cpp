#include "concretestrategyb.h" 
#include <functional>


std::string ConcreteStrategyB::doAlgorithm(std::string_view data) const
    {
        std::string result(data);
        std::sort(std::begin(result), std::end(result), std::greater<char>());

        return result;
    }
