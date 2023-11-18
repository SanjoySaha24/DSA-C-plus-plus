#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> userVector;
    int size;

    cout << "Enter the size of the vector: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid vector size." << endl;
        return 1; // Return an error code
    }

    cout << "Enter the elements of the vector:" << endl;
    for (int i = 0; i < size; ++i) {
        int element;
        cout << "Element " << i + 1 << ": ";
        cin >> element;
        userVector.push_back(element); // Add the element to the vector
    }

    // Display the entered vector
    cout << "Entered vector: ";
    for (int i = 0; i < size; ++i) {
        cout << userVector[i] << " ";
    }
    cout << endl;

    return 0;
}
