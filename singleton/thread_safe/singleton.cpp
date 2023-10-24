#include "singleton.h"
#include <iostream>
#include <mutex>

// Note to self: no need of redaclaring static type 
Singleton* Singleton::pinstance_= nullptr;
std::mutex Singleton::mutex_;

Singleton::Singleton(const std::string value): value_(value){
    std::cout << "Calling constructor with value: " << value << std::endl;
}

// No args deconstructor
Singleton::~Singleton(){};

void Singleton::SomeBusinessLogic(){
    std::cout << "Doing business" << std::endl;
}

std::string Singleton::value() const{
    return value_;
}

Singleton* Singleton::GetInstance(const std::string &value){

    /**
     * The first time we call GetInstance we will lock the storage location
     *      and then we make sure again that the variable is null and then we
     *      set the value.
     */    

    // Basically whoever comes here first locks the mutex,
    // the other thread has to wait until it is unlocked (which is when the first one
    // ends the job). At that point the pinstance_ is already set and thus the 
    // same istance is reused.
    std::lock_guard<std::mutex> lock(mutex_);

    if (pinstance_ == nullptr){
        std::cout << "first run" << std::endl;
        pinstance_ = new Singleton(value);
    }
    return pinstance_;
}


