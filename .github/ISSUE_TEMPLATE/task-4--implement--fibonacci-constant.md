---
name: 'Task 4: Implement Constant Time Fibonacci Calculation'
about: Task 4 for Students
title: 'Task 4: Implement Constant Time Fibonacci Calculation'
labels: enhancement
assignees: ''

---

**Description**

For the fourth task you need to implement a constant time algorithm to calculate the
Fibonacci numbers.  The closed-form exact solution to calculate the nth Fibonacci number
was given in the assignment description, and should be performed in this function to
calculate and return the nth Fibonacci number.

**Suggested Solution**

Use Binet's formula for the calculation:

$$
F_n = 
\begin{bmatrix}
\frac{\varphi^n}{\sqrt{5}}
\end{bmatrix}
, n \ge 0
$$

**Note**: here the symbol $[ ]$ is being used as special notation to
mean to round the value to the nearest whole integer.  The fraction
will result in a real valued number, that should be rounded to the
closest integer to get the exact Fibonacci number result desired.

The golden ratio $\varphi$ is not one of the constants defined in
the `<cmath>` library, so we have added and defined it as a constant
to use for this task at the top of `libfibonacci.cpp`.  Also you will
need to use the `round()` function from the `<cmath>` library to round
your result to the closest integer value.

**Additional Requirements**

- You are required to use `round()` from the `<cmath>` library.
- You are required to use `pow()` from the `<cmath>` library.
- You are required to use the given defined `PHI` constant from
  `libfibonacci.cpp` in your calculation.
- All implementations take a single integer n as input, and return an int result
  which is the computed nth Fibonacci number of the Fibonacci sequence.

