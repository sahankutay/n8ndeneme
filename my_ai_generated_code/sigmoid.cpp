// sigmoid.cpp

// Sigmoid function implementation

double Sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// Example usage
#include <iostream>
#include <cmath>

int main() {
    double value1 = 0.0;
    double value2 = 1.0;
    std::cout << "Sigmoid(" << value1 << ") = " << Sigmoid(value1) << std::endl;
    std::cout << "Sigmoid(" << value2 << ") = " << Sigmoid(value2) << std::endl;
    return 0;
}