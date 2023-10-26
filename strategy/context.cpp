#include "context.h"
#include "strategy.h"
#include <algorithm>
#include <memory>


//std::unique_ptr is a smart pointer that manages ownership and lifetime of dynamically allocated objects.
Context::Context(std::unique_ptr<Strategy> &&strategy)
    //n this constructor, we're using std::move(strategy) to initialize strategy_, 
    //which is a move operation, and the compiler may not be able to statically analyze 
    //all possible code paths to ensure strategy_ is always properly initialized.
    :strategy_(std::move(strategy_)){}

    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
void Context::set_strategy(std::unique_ptr<Strategy> &&strategy){
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

