/*
Multiple Inheritance
Create classes Teacher and Researcher.
Derive a class Professor that inherits from both.
Demonstrate resolving ambiguities.
*/
#include <iostream>
using namespace std;

class Teacher {
public:
    void work() {
        cout << "Teaching students." << endl;
    }
};

class Researcher {
public:
    void work() {
        cout << "Conducting research." << endl;
    }
};

class Professor : public Teacher,public Researcher {
public:
    void introduce() {
        cout << "I am a professor, I teach and research." << endl;
    }
};

int main() {
    Professor p;
    p.introduce();

    // Ambiguity: which work() should be called?
    // p.work(); // ❌ error: request is ambiguous

    // ✅ Resolving ambiguity:
    p.Teacher::work();     // explicitly call Teacher's version
    p.Researcher::work();  // explicitly call Researcher's version

    return 0;
}
