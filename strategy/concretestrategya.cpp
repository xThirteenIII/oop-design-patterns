#include "concretestrategya.h"
#include <algorithm>

std::string ConcreteStrategyA::doAlgorithm(std::string_view data) const{

   /* std::string result(data); (Direct Initialization): This syntax performs direct initialization, 
    *   which is specifically designed for creating an object and initializing it in a single step. 
    *   It is more efficient because it avoids the creation of a temporary object.
    * std::string result = data; (Copy Initialization): This syntax performs copy initialization,
    *   which involves creating a temporary std::string and then copying the content of data into the result string. 
    *   While it works, it involves an extra step of creating and copying from the temporary object.
    */
    std::string result(data);
    std::sort(std::begin(result), std::end(result));

    return result;
}
