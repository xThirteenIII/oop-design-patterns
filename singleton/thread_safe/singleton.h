//h
#include <mutex>

class Singleton{

private:
    static Singleton* pinstance_;
    std::mutex mutex_;

protected:

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
    std::string value();
};
