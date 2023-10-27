#include "product1.h"
#include <iostream>

void Product1::ListParts() const{
    std::cout << "Product parts: ";
    for (size_t i=0;i<parts_.size();i++){
        if (parts_.at(i)==parts_.back()){
            std::cout << parts_.at(i);
        }else{
            std::cout << parts_.at(i) << ", ";
        }
    }
    std::cout << "\n\n";
}
