#include <iostream>
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    std::cout << "Choose conversion (C to F or F to C): ";
    std::cin >> choice;

    if (choice == 'C' || choice == 'c') {
        double convertedTemperature = celsiusToFahrenheit(temperature);
        std::cout << temperature << " Celsius is " << convertedTemperature << " Fahrenheit." << std::endl;
    } else if (choice == 'F' || choice == 'f') {
        double convertedTemperature = fahrenheitToCelsius(temperature);
        std::cout << temperature << " Fahrenheit is " << convertedTemperature << " Celsius." << std::endl;
    } else {
        std::cout << "Invalid choice. Please enter 'C' or 'F'." << std::endl;
    }

    return 0;
}

