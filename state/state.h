#ifndef _STATE_H_
#define _STATE_H_

// Forward declaration of context
// This line is a forward declaration of the Context class. It tells the compiler that a class named Context exists, 
// but it doesn't provide any details about the class. It's often used when you need to reference a 
// class before its full definition. In this case, it's used to allow the State class to have a pointer 
// to a Context without knowing its full details.
class Context;

/**
 * The base State class declares methods that all Concrete State should
 * implement and also provides a backreference to the Context object, associated
 * with the State. This backreference can be used by States to transition the
 * Context to another State.
 */
class State{
protected:
    Context* context_;
public:
    virtual ~State(){};
    void set_context(Context* context);
    virtual void Handle1() = 0;
    virtual void Handle2() = 0;
};

#endif
