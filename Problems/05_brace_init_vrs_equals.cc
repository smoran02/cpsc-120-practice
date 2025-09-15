/* 04_brace_init_vrs_equals.cc
 * ----------------------------------------------------------------------------
 *
 * In this program we are examining why we use brace initialization ({}) 
 * intead of using the assignment operator (=) for initializing variables.
 * 
 * Task:
 *
 * 1) Create an int with assignment operator: int x = 3.14; and then print x
 *      - observe what is printed. Is it what you expect?
 *
 * 2) Replace with brace initialization: int x{3.14}; and print x again
 *      - Try to compile. What happens? Why?
 *
 * 3) Fix the program so it compiles using brace initializtion
 *	  without narrowing.
 * 
 */