#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the value for a and b: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw b;  // throwing int
        cout << "Result: " << (a / b) << endl;
    }
    catch (...) {
        cout << "Exception: Divide by zero (generic catch)" << endl;
    }

    cout << "Normal termination" << endl;
    return 0;
}
