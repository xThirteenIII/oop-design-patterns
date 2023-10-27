#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "state.h"

/**
 * The Context defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the Context.
 */

class Context{
private:
    State* state_;
public:
    //Constructor
    Context(State* state);
    //Destructor
    ~Context();
  /**
   * The Context allows changing the State object at runtime.
   */
    void TransitionTo(State* state);

  /**
   * The Context delegates part of its behavior to the current State object.
   */
    void Request1();
    void Request2();

};

#endif
