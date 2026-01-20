# DataSeries

A minimal C++ example demonstrating how to split code across multiple files,
compile with CMake, and manage the project using Git.

The project computes the arithmetic mean of a small numerical data set.

# What this project contains

- **`DataSeries`**  
  A simple C++ class that stores a collection of `double` values and provides
  a function to computes the arithmetic mean of these values.

- **`mean`**  
  A small executable program that:
  - creates a `DataSeries` object,
  - initialises it with a hard-coded data set,
  - calls the `mean()` function,
  - prints the result to standard output.
