#ifndef _CONCRETESTATEA_H_
#define _CONCRETESTATEA_H_

#include "state.h"
#include <iostream>
class ConcreteStateA : public State {
    public:
        // Reminder:The override keyword in C++ is used to indicate that a function in a derived class is 
        // intended to override a virtual function in a base class. It helps improve code correctness and 
        // maintainability by making the intent clear and allowing the compiler to catch certain errors.
        void Handle1() override;
        void Handle2() override;

};

#endif
