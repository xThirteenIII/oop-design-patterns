#ifndef _CONCRETESTATEB_H_
#define _CONCRETESTATEB_H_

#include "state.h"
class ConcreteStateB: public State{
    public:
        void Handle1() override;
        void Handle2() override;
};
#endif
