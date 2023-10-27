#ifndef _PRODUCT1_H_
#define _PRODUCT1_H_
#include <vector>
#include <string>
/**
 * It makes sense to use the Builder pattern only when your products are quite
 * complex and require extensive configuration.
 *
 * Unlike in other creational patterns, different concrete builders can produce
 * unrelated products. In other words, results of various builders may not
 * always follow the same interface.
 */
class Product1{
    public:
        std::vector<std::string> parts_;
        void ListParts() const;
};

#endif

