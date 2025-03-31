#include <iostream>
#include "LLM.h"

int main() {
    LLM model;
    
    // Sample training data
    std::vector<std::string> training_data = {
        "Example sentence 1.",
        "Example sentence 2.",
        "Example sentence 3."
    };
    
    model.train(training_data);

    std::string prompt = "What is the meaning of life?";
    std::string generated_text = model.generate(prompt, 10);
    std::cout << generated_text << std::endl;

    return 0;
}