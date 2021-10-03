---
name: 'Task 2: Implement Recursive Fibonacci Algorithm'
about: Task 2 for Students
title: 'Task 2: Implement Recursive Fibonacci Algorithm'
labels: enhancement
assignees: ''

---

**Description**

Implement the Fibonacci calculation using resursion as described.  If implemented as
described, this algorithm will perform in exponential time, similar to O(2^n) in
performance.

**Suggested Solution**

The base cases of the recursion are the same as the initial conditions of task 1
of the Fibonacci sequence.  Simply test for n = 0 and n = 1 and return F_0 = 0 and
F_1 = 1 for the base cases.

In the recursive general case, call your `fibonacciRecursive()` recursively on
`n-1` and `n-2` to calculate the previous two Fibonacci numbers, then sum these
up and return them as the result of the recursive general case.


**Additional Requirements**

- Implementation is required to run in exponential time, close to O(phi^n)
  if implemented using recursion as described.
- All implementations take a single integer n as input, and return an int result
  which is the computed nth Fibonacci number of the Fibonacci sequence.
