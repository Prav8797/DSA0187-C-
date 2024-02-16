#include <iostream>
int findGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int gcd = findGCD(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}

