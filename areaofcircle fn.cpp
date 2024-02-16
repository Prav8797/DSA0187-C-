#include <iostream>
#include <cmath>
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    if (radius < 0) {
        std::cout << "Invalid radius. Please enter a non-negative value." << std::endl;
        return 1; 
    }
    double area = calculateCircleArea(radius);

    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}

