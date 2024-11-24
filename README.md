# MathC

MathC is an open project aimed at writing math-related programs in C, with a focus on good memory management practices. This repository contains a simple C program that demonstrates dynamic memory allocation and the use of mathematical functions from the C standard library.

## Table of Contents

- **Description**
- **Features**
- **Requirements**


## Description

This program allows users to:

- Define an interval of integers `[a, b]`.
- Select a mathematical function to apply to each integer in the interval (currently, the cosine function is implemented).
- Compute and display the result of the selected function for each integer within the interval.

The primary purpose of this program is to demonstrate:

- Dynamic memory allocation and deallocation using `malloc` and `free`.
- Filling and manipulating arrays.
- Utilizing mathematical functions from `<math.h>`.
- Implementing good memory management practices in C.

## Features

- **Dynamic Memory Allocation**: Efficiently allocates memory based on user-defined interval size.
- **Mathematical Computations**: Calculates the cosine of integers within a specified range.
- **User Interaction**: Provides a simple command-line interface for inputting interval bounds and selecting functions.

## Requirements

- **C Compiler**: Any standard C compiler (e.g., `gcc`).
- **Libraries**:
  - `stdio.h` for input/output functions.
  - `stdlib.h` for memory allocation functions.
  - `math.h` for mathematical computations.

