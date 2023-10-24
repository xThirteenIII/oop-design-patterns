/* To implement a sloppy Singleton. 
 * You just need to hide the constructor and implement a static creation method.
 */

/* The same class behaves incorrectly in a multithreaded environment.
 * Multiple threads can call the creation method simultaneously and get several instances of Singleton class.
 */

/**
 * The Singleton class defines the `GetInstance` method that serves as an
 * alternative to constructor and lets clients access the same instance of this
 * class over and over.
 */

#ifndef _NAIVE_H_
#define _NAIVE_H_

#include <string>
class Singleton{

protected:
     /**
     * The Singleton's constructor should always be private to prevent direct
     * construction calls with the `new` operator.
     */
    Singleton(const std::string value);
    static Singleton* singleton_;
    std::string value_;

public:
    //Disable copy constructor
    Singleton(Singleton &other) = delete;
    
    //Disable copy assignment
    void operator=(const Singleton &) = delete;

    /* This means that
     * Singleton original("Original");
     * Singleton copy(original); // Attempt to copy using the copy constructor
     * 
     * will generate a compile error. 
     * Same as 
     * Singleton original("Original");
     * Singleton another("Another");
     * another = original; // Attempt to assign one Singleton to another
     */

    /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */

    static Singleton *GetInstance(const std::string& value);
    void SomeBusinessLogic();

    std::string value() const;
};


#endif
