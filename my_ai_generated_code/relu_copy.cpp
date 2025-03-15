// relu.cpp

// Rectified Linear Unit (ReLU) function implementation
double ReLU(double x) {
    return (x > 0) ? x : 0;
}

// Example usage
#include <iostream>

int main() {
    double value1 = 3.5;
    double value2 = -2.5;
    std::cout << "ReLU(" << value1 << ") = " << ReLU(value1) << std::endl;
    std::cout << "ReLU(" << value2 << ") = " << ReLU(value2) << std::endl;
    return 0;
}