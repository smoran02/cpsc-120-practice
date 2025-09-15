/* 
 * 02_errors_soln.cc
 */

#include <iostream>

int main() {

	// Compile-time error
	std::cout << "Compile time error incoming!\n"

	// Run-time error
	std::cout << (3 + 5 + 7) / 0 << '\n';

	//Logical error
	std::cout << "The average is "
	          << (3 + 5 + 7) / 4 << '\n';

	return 0;
}