/** @file libfibonacci.cpp
 * @brief Implementation of algorithmes for Assignment
 *   Analysis of Algorithms
 *
 * @author Jane Programmer
 * @note   class: COSC 2336, Fall 2021
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Recursion
 * @date   October 1, 2021
 *
 * Implement algorithms with varying time complexities and compare
 * their performance.
 *
 * This file contains the actual implementation of the functions
 * and code you are required to complete for Assignment Recursion.
 * Make sure you modify the file header information to be correct
 * for the code you are creating.
 */
#include <cmath>
#include <iostream>

using namespace std;


/// phi is the golden ratio, not defined in <cmath> for c++ 11 so define it
/// here by hand for use in this assignment
double PHI = (sqrt(5.0) + 1.0) / 2.0;

/// global variable used to count number of operations in algorithms so we
/// can estimate computational complexity.
int operationCount;

/// global fibonacci table for memoization solution
/// We initialize F_0 and F_1 to 1.  All other values
/// initially 0 indicate not calculated yet NOT_CALCULATED
const int NOT_CALCULATED = -1;
const int MAX_FIBONACCI_NUMBER = 47;
int fibonacciTable[MAX_FIBONACCI_NUMBER + 1] = { NOT_CALCULATED };

/** @brief initialize fibonacci table
 *
 * Function that will (re)intiailzie the fibonacci table, which
 * is used in the task to implement the fibonacci calculation using
 * the memoization technique.  We need to be able to reinitialize
 * this table so that we can accuratly calculate performance and
 * complexity of the implementation.
 */
void initializeFibonacciTable()
{
  // set x_0 to 0 and x_1 to 1
  fibonacciTable[0] = 0;
  fibonacciTable[1] = 1;

  // initialze rest of table to not calculated yet
  for (int n = 2; n <= MAX_FIBONACCI_NUMBER; n++)
  {
    fibonacciTable[n] = NOT_CALCULATED; 
  }
}

