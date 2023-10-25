Abstract Factory defines an interface for creating all distinct products but leaves the actual product creation to concrete factory classes. 
Each factory type corresponds to a certain product variety.

The client code calls the creation methods of a factory object instead of creating products directly with a constructor call (new operator). 
Since a factory corresponds to a single product variant, all its products will be compatible.

Client code works with factories and products only through their abstract interfaces. 
This lets the client code work with any product variants, created by the factory object. 
You just create a new concrete factory class and pass it to the client code

Identification: The pattern is easy to recognize by methods, which return a factory object. Then, the factory is used for creating specific sub-components.

Factory VS Abstract Factory
The Factory Method pattern focuses on creating individual objects, allowing for flexibility in the choice of the object type. 
The Abstract Factory pattern, on the other hand, focuses on creating families of related objects with the assurance that these objects are designed to work together. 
The choice between these patterns depends on your specific design requirements and the relationships between objects in your application.
