#include <iostream>
#include <thread>

int main() {
    unsigned int num_thread = std::thread::hardware_concurrency();
    if (num_thread!=0) {
        std::cout<<num_thread<<"\n";
    }
}
