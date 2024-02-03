---
name: 'Task 1: Implement Linear Fibonacci Algorithm'
about: Task 1 for Students
title: 'Task 1: Implement Linear Fibonacci Algorithm'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Implement a O(n) linear time algorithm to compute the nth Fibonacci number as described
in the assignment.  Your linear implementation should use a loop to calculate 
Fibonacci numbers for n >= 2 and should perform in linear time.

**Suggested Solution**

Treat the initial conditions F_0 = 0 and F_1 = 1 as special cases and use a condition statement to detect and just directly return the computation for these initial conditions.

But if calculating some Fibonacci number for n >= 2.  You should do this 
by implementing a loop using the following algorithm/approach.

1. Initialize 3 local variables to hold the $n-2$, $n-1$ and $n$ Fibonacci
   numbers.  We will be starting by calculating $F_2$, so you should initialize
   the $n-2$ value to be $F_0 = 0$ and the $n-1$ value to be $F_1 = 1$.
2. Implement a loop that iterates from index $i = 2$ up to $i = n$, where $n$
   was the input given of which Fibonacci number to calculate and return.  At this
   point since you already handled $n = 0$ and $n = 1$, then $n$ should be
   $n >= 2$ at this point.
   - Calculate the current $n^{th}$ Fibonacci number using the values in $n-1$
     and $n-2$ variables.
   - Copy the $n-1$ to the $n-2$ value and the $n$ you just calculated to the
     $n-1$.  This shifting is in preparation for the next loop iteration, if
	 more loop iterations are needed.
3. Return the final calculated $n$ Fibonacci number from the loop.


**Additional Requirements**

- Implementation is required to be an O(n) linear time algorithm using a loop
  that runs approximately n iterations to calculate the nth Fibonacci number.
- All implementations take a single integer n as input, and return an int result
  which is the computed nth Fibonacci number of the Fibonacci sequence.
