#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder{
    public:
        virtual ~Builder(){};
        virtual void ProducePartA() const =0;
        virtual void ProducePartB() const =0;
        virtual void ProducePartC() const =0;
};
#endif
