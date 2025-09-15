/*
 * 10_perimeter_soln.cc
 */

#include <iostream>

// Declare perimeter function
// Function takes in length and width and prints the perimeter
void Perimeter(int length, int width) {
	std::cout << "Perimeter: " << 2 * (length + width) << '\n';
}

int main() {

	int length{}, width{};

	std::cout << "Enter the length: ";
	std::cin >> length;

	std::cout << "Enter the width: ";
	std::cin >> width;

	// Call the Perimeter function
	Perimeter(length, width);
}