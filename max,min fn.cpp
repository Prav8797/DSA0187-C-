#include <iostream>
void findMinMax(const int arr[], int size, int& minValue, int& maxValue) {
    if (size <= 0) {
        std::cout << "Array is empty." << std::endl;
        return;
    }

    minValue = maxValue = arr[0]; 

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i]; 
        } else if (arr[i] > maxValue) {
            maxValue = arr[i]; 
        }
    }
}

int main() {
    const int size = 5;
    int arr[size];
    std::cout << "Enter " << size << " elements in the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int minValue, maxValue;
    findMinMax(arr, size, minValue, maxValue);
    std::cout << "Minimum element: " << minValue << std::endl;
    std::cout << "Maximum element: " << maxValue << std::endl;

    return 0;
}

