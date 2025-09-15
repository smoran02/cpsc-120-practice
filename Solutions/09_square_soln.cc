/*
 * 09_square_soln.cc
 */

#include <iostream>

// Declare Square function
// Function that takes an integer n and returns n*n
int Square(int n) {
	return n * n;
}

// Entry point is still main function
// Sequential execution begins here
int main() {
	int num{};
	
	std::cout << "Enter number to square: ";
	std::cin >> num;

    // Call Square function and print its return value
	std::cout << "Square is: " << Square(num) << "\n";


	return 0;
}