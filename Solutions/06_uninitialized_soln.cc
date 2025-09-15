/*
 * 06_unitialized_soln.cc
 */

#include <iostream>

int main() {

	int y;
	std::cout << y << '\n'; // Undefined behavior

	int z{}; // default, zero-initialized
	std::cout << z << '\n';

	return 0;
}