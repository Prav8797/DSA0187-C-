#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {-45, 78, 23, 89, -90};
    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + size);
    cout << "Array in Non-Decreasing Order: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

