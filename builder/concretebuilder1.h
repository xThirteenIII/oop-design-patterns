#include "builder.h"
#include "product1.h"

/**
 * The Concrete Builder classes follow the Builder interface and provide
 * specific implementations of the building steps. Your program may have several
 * variations of Builders, implemented differently.
 */

class ConcreteBuilder1: public Builder{
    private:
        Product1* product;

        /**
         * A fresh builder instance should contain a blank product object, which is
         * used in further assembly.
         */
    public:
        // Constructor
        ConcreteBuilder1();
        // Destructor
        ~ConcreteBuilder1();
        void Reset();
        void ProducePartA() const override;
        void ProducePartB() const override;
        void ProducePartC() const override;

    /**
     * Concrete Builders are supposed to provide their own methods for
     * retrieving results. That's because various types of builders may create
     * entirely different products that don't follow the same interface.
     * Therefore, such methods cannot be declared in the base Builder interface
     * (at least in a statically typed programming language). 
     *
     * Usually, after returning the end result to the client, a builder instance
     * is expected to be ready to start producing another product. That's why
     * it's a usual practice to call the reset method at the end of the
     * `getProduct` method body. However, this behavior is not mandatory, and
     * you can make your builders wait for an explicit reset call from the
     * client code before disposing of the previous result.
     */

    /**
     * Please be careful here with the memory ownership. Once you call
     * GetProduct the user of this function is responsable to release this
     * memory. Here could be a better option to use smart pointers to avoid
     * memory leaks
     */

    Product1* GetProduct();
};
