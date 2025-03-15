#include <cmath>

// Sigmoid function
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}