#include "naive.h"
#include <chrono>
#include <iostream>
#include <thread>
#include <pthread.h>

// Define thread functions
void ThreadFoo(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("FOO");
    std::cout << singleton->value() << std::endl;
}

void ThreadBar(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("BAR");
    std::cout << singleton->value() << std::endl;
}

int main(){

    // Different thread outputs means that the singleton was reused -> BAD!
    
    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);

    // join returns when the thread function has completed
    t1.join();
    t2.join();
    return 0;
}

