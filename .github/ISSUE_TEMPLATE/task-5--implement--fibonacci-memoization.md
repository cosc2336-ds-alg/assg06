---
name: 'Task 5: Implement Fibonacci calculation using memoization'
about: Task 5 for Students
title: 'Task 5: Implement Fibonacci calculation using memoization'
labels: enhancement
assignees: ''

---

**Description**

In task 5 you are to implement the Fibonacci computation using the describe memoization technique.  This technique builds a lookup table of the Fibonacci calculated results as needed when called.  The table and function to initialize it have been given for you to use in this task.

**Suggested Solution**

1. First check the `fibonacciTable` to see if the requested value of
   `n` has not yet been calculated.  If the value has not been calculated,
   perform the calculation.  
   - Basically use a recursive approach, but call `fibonacciMemoization()`
     recursively on $n-1$ and $n-2$ to calculate/lookup the previous 2
	 Fibonacci numbers.
   - Sum up these and update the `fibonacciTable` with the result of this
     calculation when performed.
2. After check and calculating if needed, you are assured that the value of
   the $n^{th}$ Fibonacci number is in the table, having either just been
   calculated, or calculated some time previously.  So simply look up the
   value in the table and return it as the result.


**Additional Requirements**

- You must use the `fibonacciTable` defined in `libfibonacci.cpp` as your look up
  table for this task.
- You must use the defined `NOT_CALCULATED` named constant in your code when
  testing if a value in the table has been calculated yet or not.
- You are required to use the recursive definition to perform the needed calculation
  here, don't reuse a previous Fibonacci function to calculate the result (especially
  not the previous recursive implementation).
- All implementations take a single integer n as input, and return an int result
  which is the computed nth Fibonacci number of the Fibonacci sequence.

