#include <iostream>
#include <string>
int countElements(const std::string& input) {
    return input.length();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int elementCount = countElements(input);
    std::cout << "Number of elements in the string: " << elementCount << std::endl;

    return 0;
}

