#include <iostream>
using namespace std;

double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    // Input Celsius values
    double celsiusValues[] = {4.4, 10, 12, 7, 70};
    int size = sizeof(celsiusValues) / sizeof(celsiusValues[0]);

    // Convert and display Fahrenheit values
    cout << "Celsius\tFahrenheit" << endl;
    for (int i = 0; i < size; ++i) {
        double celsius = celsiusValues[i];
        double fahrenheit = convertCelsiusToFahrenheit(celsius);
        cout << celsius << "\t" << fahrenheit << endl;
    }

    return 0;
}

