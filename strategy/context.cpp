#include "context.h"
#include "strategy.h"
#include <algorithm>
#include <memory>


// std::unique_ptr is a smart pointer that manages ownership and lifetime of dynamically allocated objects.
/* Smart pointers like std::unique_ptr represent ownership of dynamically allocated objects. 
 * They are designed to enforce strict ownership semantics, meaning that only one entity 
 * (the smart pointer) should own and be responsible for the lifetime of the pointed object. 
 */
Context::Context(std::unique_ptr<Strategy> &&strategy)
    // n this constructor, we're using std::move(strategy) to initialize strategy_, 
    // which is a move operation, and the compiler may not be able to statically analyze 
    // all possible code paths to ensure strategy_ is always properly initialized.
    :strategy_(std::move(strategy)){}

    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
void Context::set_strategy(std::unique_ptr<Strategy> &&strategy){

    // The std::move(strategy) operation transfers ownership of the strategy object to strategy_.
    // Ownership Transfer: By using std::move(strategy), you transfer ownership of the Strategy object 
    // from the parameter to the member variable. After this operation, the strategy parameter will 
    // be in a valid but unspecified state, and strategy_ will hold the ownership of the Strategy object.
    strategy_ = std::move(strategy);
}
    /**
     * The Context delegates some work to the Strategy object instead of
     * implementing +multiple versions of the algorithm on its own.
     */

void Context::doSomeBusinessLogic() const{
        if (strategy_) {
            std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
            std::string result = strategy_->doAlgorithm("aecbd");
            std::cout << result << "\n";
        } else {
            std::cout << "Context: Strategy isn't set\n";
        }
}

