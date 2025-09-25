#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    string choice;
    int pos;
    cout << "Enter the choice (left/right): ";
    cin >> choice;
    cout << "Enter the position: ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position...!" << endl;
        return 0;
    }

    int *temp = new int[n];

    if (choice == "right") {
        for (int i = 0; i < n; i++) {
            temp[(i + pos) % n] = arr[i];
        }
    } 
    else if (choice == "left") {
        for (int i = 0; i < n; i++) {
            temp[(i - pos + n) % n] = arr[i];
        }
    } 
    else {
        cout << "Invalid choice...!" << endl;
        return 0;
    }

    // Copying back
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Printing result
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] temp;

    return 0;
}
