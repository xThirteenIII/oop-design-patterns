#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <iostream>
/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
class Strategy
{
public:
    virtual ~Strategy() = default;

    //Note to self:
    //std::string_view is a C++ class introduced in C++17 that represents a non-owning, 
    //read-only view of a sequence of characters, typically used to reference a portion of a std::string 
    //or an array of characters. It's part of the C++ Standard Library and provides a way to efficiently work 
    //with character data without making unnecessary copies.
    virtual std::string doAlgorithm(std::string_view data) const = 0;
};

#endif
