#include "concretestatea.h"
#include "concretestateb.h"
#include "context.h"

void ConcreteStateA::Handle1(){

    std::cout << "ConcreteStateA handles request1.\n";
    std::cout << "ConcreteStateA wants to change the state of the context.\n";

    this->context_->TransitionTo(new ConcreteStateB);}

void ConcreteStateA::Handle2(){
    std::cout << "ConcreteStateA handles request2.\n";
}
