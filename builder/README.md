Builder is a creational design pattern, which allows constructing complex objects step by step.

Unlike other creational patterns, Builder doesn’t require products to have a common interface. 
That makes it possible to produce different products using the same construction process.

Usage examples: The Builder pattern is a well-known pattern in C++ world. 
It’s especially useful when you need to create an object with lots of possible configuration options.

Identification: The Builder pattern can be recognized in a class, which has a single creation method and 
several methods to configure the resulting object. Builder methods often support chaining 
(for example, someBuilder->setValueA(1)->setValueB(2)->create()).
