# Sudoku Solver

## CodeAlpha Internship – Project 3

This project was developed as part of my **C++ Programming Internship organized by CodeAlpha**.

The Sudoku Solver is a console-based C++ application that solves a standard **9×9 Sudoku puzzle** using the **Backtracking Algorithm**.

## Project Objective

The main objective of this project is to develop a program that can automatically solve a Sudoku puzzle by finding valid numbers for all empty cells while following the standard Sudoku rules.

The program:

- Takes a 9×9 Sudoku grid as input.
- Uses `0` to represent empty cells.
- Checks whether a number can be safely placed.
- Solves the puzzle using recursion and backtracking.
- Displays the solved Sudoku grid.
- Handles puzzles that cannot be solved.

## Sudoku Rules

A valid Sudoku solution must satisfy the following rules:

- Each row must contain numbers from 1 to 9 without repetition.
- Each column must contain numbers from 1 to 9 without repetition.
- Each 3×3 box must contain numbers from 1 to 9 without repetition.
- Empty cells are represented by `0`.

## Algorithm Used

### Backtracking Algorithm

The program uses **recursion and backtracking** to solve the Sudoku.

The basic process is:

1. Find an empty cell.
2. Try numbers from 1 to 9.
3. Check whether the number is safe to place.
4. If the number is valid, place it in the cell.
5. Recursively solve the remaining Sudoku.
6. If the solution fails, remove the number and try another number.
7. Continue until the Sudoku is solved.

## Safety Checking

Before placing a number, the program checks:

- The current row
- The current column
- The corresponding 3×3 box

A number is placed only when it does not already exist in any of these areas.

## Features

- 9×9 Sudoku support
- User input for the Sudoku grid
- Input validation
- Automatic Sudoku solving
- Backtracking algorithm
- Recursive problem-solving
- Row, column, and 3×3 box validation
- Displays the solved Sudoku
- Detects unsolvable puzzles

## Technologies Used

- C++
- Arrays
- Functions
- Loops
- Conditional Statements
- Recursion
- Backtracking Algorithm
- Input Validation

## Project Structure

```text
Project_3_Sudoku_Solver/
│
├── main.cpp
└── README.md