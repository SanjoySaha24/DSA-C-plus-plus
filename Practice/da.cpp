#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void removeDuplicates(vector<int>& arr) {
    unordered_set<int> seen;  
    vector<int> result;      

    for (int num : arr) {
        if (seen.insert(num).second) {
            result.push_back(num);
        }
    }

    // Copy the unique elements back to the original array
    arr = result;
}

int main() {
    // Example array with duplicates
    vector<int> arr = {2, 5, 3, 7, 2, 8, 5, 1, 3};

    // Output original array
    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Remove duplicates
    removeDuplicates(arr);

    // Output array without duplicates
    cout << "Array without Duplicates: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
