Strategy is a behavioral design pattern that turns a set of behaviors into objects and makes them interchangeable 
inside original context object.

The original object, called context, holds a reference to a strategy object.
The context delegates executing the behavior to the linked strategy object.
In order to change the way the context performs its work, other objects may replace the currently linked
strategy object with another one.
Usage examples: The Strategy pattern is very common in C++ code. 
It’s often used in various frameworks to provide users a way to change the behavior of a class without extending it.

Identification: Strategy pattern can be recognized by a method that lets a nested object do the actual work, 
as well as a setter that allows replacing that object with a different one.

In the context of the Strategy design pattern, declaring the destructor as = default serves a specific purpose. The Strategy interface is meant to be a base class that defines a contract for concrete strategy classes to adhere to. Here's the rationale for declaring the destructor this way:


1.  Polymorphism and Dynamic Memory Management: When you have a hierarchy of classes with polymorphism, 
    it's common to allocate objects on the heap (using the new operator) and then deallocate 
    them when they are no longer needed (using the delete operator). By defaulting the destructor, 
    you are allowing derived classes to manage their own resources. 
    This ensures that when you delete an object of a derived class through a pointer to the base class, 
    the derived class's destructor is called, which is necessary for proper resource cleanup.

2.  Preventing Resource Leaks: If you didn't declare the destructor as = default in the base class, 
    the derived classes might not call their destructors correctly, leading to resource leaks if they allocate 
    resources that need to be released. By providing a default destructor, you ensure that every derived class 
    has an accessible destructor, even if it doesn't need to perform any specific cleanup.

3.  Uniform Interface: It enforces a uniform interface for all concrete strategy classes. 
    In the context of the Strategy pattern, it's important that concrete strategies implement the same methods. 
    By providing a default destructor, you ensure that all strategy classes adhere to this interface, even 
    if they don't have any custom destructor logic.

In summary, declaring the destructor as = default in the Strategy interface is a good practice in situations where 
you expect polymorphism and dynamic memory management. It helps ensure that derived classes implement destructors 
correctly and manage resources consistently.
