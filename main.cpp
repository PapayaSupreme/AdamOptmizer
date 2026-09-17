#include <iostream>
#include <vector>
#include "AdamOptimizer.hpp"

int main() {
    // example parameters to optimize
    std::vector<double> params = {0.5, 0.5};
    AdamOptimizer optimizer(params);
    std::vector<double> grads = {0.1, 0.2};
    optimizer.step(grads);
    std::cout << "updated parameters; ";
    for (const auto& param : params) {
        std::cout << param << " ";
    }
    std::cout << std::endl;
}