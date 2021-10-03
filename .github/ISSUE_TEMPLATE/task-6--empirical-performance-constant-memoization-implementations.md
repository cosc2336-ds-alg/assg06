---
name: 'Task 6: Empirical Performance of Constant and Memoization Implementations'
about: Task 6 for Students
title: 'Task 6: Empirical Performance of Constant and Memoization Implementations'
labels: enhancement
assignees: ''

---

**Description**

Run the unit tests for task 6 and observe the empirical average
elapsed times.  Modify the first two Fibonacci functions for the
constant and memoization implementations to count up the number of
operations performed (approximately).  This is trivial for the
constant time algorithm, it is simply the count of the number of
operations performed (like divisions, raising to a power, assignments,
rounding, etc.)  For the memoization algorithm you should count the
number of operations needed when the calculation needs to be
performed, and add in the number of operations when looking up the
result to return.  When looking up the result to return, you probably
have 2 operations, the operation to test if the value has been
calculated or not yet (boolean comparison), and then the lookup to
retrieve the value from the table to be returned.  You may modify the
constants in the tests for this task to match your implementation when
calculating performed operations for the constant and memoization
algorithms.

**Suggested Solution**

You may tweak the defined constants if needed to get the tests to pass for your
implementations of the functions.

**Additional Requirements**

- you are required to update the global defined `operationCount` variable as given to
  correctly count empirical operations in your code for the tests.
