# Adam Optimizer in C++

This project implements the Adam optimization algorithm in C++. The Adam optimizer is widely used in machine learning and deep learning for training models due to its adaptive learning rate capabilities.

## Features

- Implements the Adam optimization algorithm.
- Supports AMSGrad variant.
- Allows for weight decay (L2 regularization).
- Provides a simple interface for parameter updates.

## Requirements

- A C++ compiler that supports C++11 or later (e.g., Clang, GCC).
- CMake (optional, for building).

## Files

- `main.cpp`: Contains the main function demonstrating the usage of the Adam optimizer.
- `AdamOptimizer.hpp`: Header file declaring the `AdamOptimizer` class.
- `AdamOptimizer.cpp`: Implementation of the `AdamOptimizer` class.

## Compilation

To compile the project, navigate to the directory containing the source files and run the following command:

```bash
clang++ -o adam_optimizer main.cpp AdamOptimizer.cpp -std=c++11
 
