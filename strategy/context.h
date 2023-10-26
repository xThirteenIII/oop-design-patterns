#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "strategy.h"
#include <iostream>

/**
 * The Context defines the interface of interest to clients.
 */

class Context
{
    /**
     * @var Strategy The Context maintains a reference to one of the Strategy
     * objects. The Context does not know the concrete class of a strategy. It
     * should work with all strategies via the Strategy interface.
     */
private:
    std::unique_ptr<Strategy> strategy_;
    /**
     * Usually, the Context accepts a strategy through the constructor, but also
     * provides a setter to change it at runtime.
     */
public:

    // Note to self:
    // The explicit keyword in C++ is used to specify that a particular constructor or conversion operator should not 
    // be implicitly invoked by the compiler for automatic type conversions. 
    // In other words, it prevents the constructor or operator from being used in implicit type conversions, 
    // particularly when initializing objects or passing arguments to functions.
    //
    // Constructor
    explicit Context(std::unique_ptr<Strategy> &&strategy = nullptr); 
    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void set_strategy(std::unique_ptr<Strategy> &&strategy);
    void doSomeBusinessLogic() const;
};

#endif
