#include <iostream>
using namespace std;
#include <memory>  // for smart pointers

int main() {
    unique_ptr<int> ptr = make_unique<int>(42);

    std::cout << "Value: " << *ptr << std::endl;
    // No need to delete — it’s automatic!
    return 0;
}
