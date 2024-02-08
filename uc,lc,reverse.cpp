#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
    cout << "Uppercase: " << inputString << endl;
    transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
    cout << "Lowercase: " << inputString << endl;
    reverse(inputString.begin(), inputString.end());
    cout << "Reverse: " << inputString << endl;

    return 0;
}

