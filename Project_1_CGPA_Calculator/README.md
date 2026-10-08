# CGPA Calculator

## CodeAlpha Internship – Project 1

This project was developed as part of my **C++ Programming Internship organized by CodeAlpha**.

The CGPA Calculator is a console-based C++ application that calculates the **Semester GPA and Overall CGPA** based on course grades and credit hours.

## Project Objective

The main objective of this project is to develop a simple and user-friendly program that can:

- Take the number of semesters as input
- Take the number of courses for each semester
- Take course name, grade, and credit hours
- Calculate the GPA for each semester
- Calculate the overall CGPA
- Display course-wise information
- Validate user inputs

## Features

- Course-wise grade and credit hour input
- Semester GPA calculation
- Overall CGPA calculation
- Weighted GPA calculation based on credit hours
- Input validation
- Multiple semester support
- Simple console-based interface

## Grade Point System

| Grade | Grade Point |
|-------|-------------|
| A+    | 10          |
| A     | 9           |
| B+    | 8           |
| B     | 7           |
| C     | 6           |
| D     | 5           |
| F     | 0           |

## Formula

### Semester GPA

GPA = Σ(Grade Point × Credit Hours) / Σ(Credit Hours)

### Overall CGPA

CGPA = Σ(Semester GPA × Semester Credits) / Σ(Semester Credits)

## Technologies Used

- C++
- Structures
- Functions
- Arrays
- Loops
- Conditional Statements
- Strings
- Input Validation
- `<iomanip>`

## Project Structure

```text
Project_1_CGPA_Calculator/
│
├── main.cpp
└── README.md