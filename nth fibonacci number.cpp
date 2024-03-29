#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. N should be a non-negative integer." << endl;
    } else {
        int result = fibonacciRecursive(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }

    return 0;
}

