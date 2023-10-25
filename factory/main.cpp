#include "product.h"
#include "creator.h"
#include "concretecreator1.h"
#include "concretecreator2.h"
#include <iostream>

/**
 * The client code works with an instance of a concrete creator, albeit through
 * its base interface. As long as the client keeps working with the creator via
 * the base interface, you can pass it any creator's subclass.
 */
// In the ClientCode function, you do not use the FactoryMethod() directly to create products. 
// Instead, you rely on the factory method encapsulated within the creators to create the products.
void ClientCode(const Creator& creator) {
  // ...
  std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
            << creator.SomeOperation() << std::endl;
  // ...
}

int main(){
    std::cout << "App: launched with ConcreteCreator1" << std::endl;
    //The key here is that when you call creator.FactoryMethod(), the actual method that is executed depends on the runtime type of the object that creator points to. 
    //In this case, it will call ConcreteCreator1::FactoryMethod() because creator points to an instance of ConcreteCreator1.
    //The FactoryMethod() is responsible for creating an object of a specific concrete class (e.g., ConcreteProduct1) and returning a pointer to it. 
    //In this way, the Factory Method is responsible for creating objects while encapsulating the object creation process. This is the core idea behind the Factory Method pattern.
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreator2.\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;

    std::cout << "App: launched with ConcreteCreator2" << std::endl;
    return 0;
}


