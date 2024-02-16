#include <iostream>
#include <string>
#include <cctype>
bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    for (char ch : str) {
        if (std::isalnum(ch)) {
            cleanedStr += std::tolower(ch);
        }
    }
    int left = 0;
    int right = cleanedStr.length() - 1;

    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false; 
        }
        ++left;
        --right;
    }

    return true; 
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

