/*
 * 07_rectangle_area_soln.cc
 */

#include <iostream>

int main() {

	int length{}, width{};

	std::cout << "Enter rectangle length: ";
	std::cin >> length;

	std::cout << "Enter rectangle width: ";
	std::cin >> width;

	// Calculate area of rectangle using length * width
	int area{length * width};

	std::cout << "Rectangle area: " << area << "\n";


	return 0;
}