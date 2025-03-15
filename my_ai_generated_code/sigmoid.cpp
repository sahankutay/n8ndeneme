#include <cmath>

// Sigmoid function
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    // Test the sigmoid function
    double test_value = 0.0;
    double result = sigmoid(test_value);
    printf("Sigmoid of %f is %f\n", test_value, result);
    return 0;
}