---
name: 'Task 3: Empirical Performance of Linear and Recursive Implementations'
about: Task 3 for Students
title: 'Task 3: Empirical Performance of Linear and Recursive Implementations'
labels: enhancement
assignees: ''

---

**Description**

Run the unit tests for task 3 and observe the empirical average elapsed times.  Modify
the first two Fibonacci functions for the linear and recursive implementations to
count up the number of operations performed (approximately) in the first case, and
simply the number of times the function is called in the `fibonacciRecursive()`
function case.  You may modify the constants in the tests for this task to match
your implementation when calculating performed operations for the linear case, though
for the recursive case you should end up performing exactly the number of function
calls shown in the tests if you have implemented the recursive function as described.

**Suggested Solution**

You may tweak the defined constants if needed to get the tests to pass for the linear
operation count.

**Additional Requirements**

- you are required to update the global defined `operationCount` variable as given to
  correctly count empirical operations in your code for the tests.
