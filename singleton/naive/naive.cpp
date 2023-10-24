// Implement header class
//
#include "naive.h"
#include <iostream>
#include <ostream>
#include <string>
#include <thread>

// Constructor
Singleton::Singleton(const std::string value) : value_(value) {
    std::cout << "Calling constructor with value: " << value << std::endl;
}

// Initialize singleton_ to nullptr
Singleton* Singleton::singleton_ = nullptr;



// Implement GetInstance method
Singleton* Singleton::GetInstance(const std::string &value){
    
    // If singleton_ points to null, it means there's no instance yet
    // On the first run, create a singleton object and place it in 
    // the static field singleton_
    if (singleton_ == nullptr){
        std::cout << "First run, creating istance" << std::endl;
        // Note to self: since it's a static var, there's no need to delete 
        // the allocated memory, when the program ends it autodeletes it.
        singleton_ = new Singleton(value);
    }
    // Otherwise return the istance
    std::cout << "Istance already created and points to " << singleton_ << std::endl;
    return singleton_;
}

// Implement SomeBusinessLogic()
void Singleton::SomeBusinessLogic(){
    std::cout << "Doing stuff" << std::endl;
}

// Implement value()
std::string Singleton::value() const{
    return value_;
}
