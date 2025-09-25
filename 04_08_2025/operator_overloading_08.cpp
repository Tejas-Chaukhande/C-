/*
Operator Overloading
Overload + and - operators for a Vector2D class to perform vector addition and subtraction.
*/
#include <iostream>
#include <vector>
using namespace std;

class Vectors {
private:
    vector<vector<int>> vec;
    int m, n;

public:
    Vectors(int m, int n) : m(m), n(n) {
        vec.resize(m, vector<int>(n, 0)); // Initialize with zeros
    }

    void Input() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Enter vector element [" << i << "][" << j << "] : ";
                cin >> vec[i][j];
            }
        }
    }

    void Print() {
        cout << "Vector Elements are:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Operator Overloading +
    friend Vectors operator+(const Vectors &v1, const Vectors &v2) {
        if (v1.m != v2.m || v1.n != v2.n) {
            throw invalid_argument("Dimensions must match for addition");
        }

        Vectors temp(v1.m, v1.n);
        for (int i = 0; i < v1.m; i++) {
            for (int j = 0; j < v1.n; j++) {
                temp.vec[i][j] = v1.vec[i][j] + v2.vec[i][j];
            }
        }
        return temp;
    }
};

int main() {
    Vectors v1(2, 3);
    v1.Input();
    v1.Print();

    Vectors v2(2, 3);
    v2.Input();
    v2.Print();

    Vectors v3 = v1 + v2;
    v3.Print();

    return 0;
}
