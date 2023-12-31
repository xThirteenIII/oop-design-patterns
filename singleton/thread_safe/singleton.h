#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <mutex>

class Singleton{

protected:
    static Singleton* pinstance_;
    static std::mutex mutex_;

private:

    // Constructor
    Singleton(const std::string value); 

    // Destructor
    ~Singleton();

    std::string value_;

public:

    // Avoid copy and assign constructors
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton* GetInstance(const std::string &value);

    void SomeBusinessLogic();
    std::string value() const;
};

#endif
