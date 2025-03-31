#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include <vector>
#include <iostream>

class NeuralNetwork {
public:
    NeuralNetwork(std::vector<int> layers);
    void train(const std::vector<std::vector<double>>& training_data, const std::vector<double>& labels);
    std::vector<double> predict(const std::vector<double>& input);
    void setTopology(std::vector<int> layers);

private:
    std::vector<int> layer_sizes;
    // Initialize weights and biases as per the topology
    std::vector<std::vector<std::vector<double>>> weights;
    std::vector<std::vector<double>> biases;
    void initialize();
    double activationFunction(double x);
    double activationFunctionDerivative(double x);
};

#endif // NEURAL_NETWORK_H
