The Factory Method defines a method, which should be used for creating objects instead of using a direct constructor call (new operator). Subclasses can override this method to change the class of objects that will be created.

Identification: Factory methods can be recognized by creation methods that construct objects from concrete classes. While concrete classes are used during the object creation, the return type of the factory methods is usually declared as either an abstract class or an interface.

A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

-Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
-They are mainly used to achieve Runtime polymorphism.
-Functions are declared with a virtual keyword in a base class.
-The resolving of a function call is done at runtime.

Rules for Virtual Functions

The rules for the virtual functions in C++ are as follows:

-Virtual functions cannot be static.
-A virtual function can be a friend function of another class.
-Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
-The prototype of virtual functions should be the same in the base as well as the derived class.
-They are always defined in the base class and overridden in a derived class. 
 It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
-A class may have a virtual destructor but it cannot have a virtual constructor.

