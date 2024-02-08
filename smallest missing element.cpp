#include <iostream>
using namespace std;

int findSmallestMissingElement(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the missing element is on the right side
        if (arr[mid] == mid)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int main() {
    int arr[] = {0, 1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSmallestMissingElement(arr, size);

    cout << "The smallest missing element is: " << result << endl;

    return 0;
}

