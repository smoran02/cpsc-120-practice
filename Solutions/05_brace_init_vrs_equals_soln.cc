/*
 * 05_brace_init_vrs_equals_soln.cc
 */

#include <iostream>

int main() {

	int x = 3.14;

	std::cout << x << '\n'; // data loss: prints 3

	// Compile-time error
	// int x{3.14};

	// Correct declaration
	double d{3.14};

	std::cout << d << '\n'; // prints 3.14 as expected

	return 0;
}