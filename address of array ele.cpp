#include <iostream>
using namespace std;

int main() {
    const int size = 5; 
    int arr[size];
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nAddresses of each element in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": " << &arr[i] << endl;
    }

    return 0;
}

