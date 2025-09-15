/*
 * 08_circle_area_soln.cc
 */

#include <iostream>

int main() {

	int radius{};
	// Use a constant variable prefixed with k to store PI
	const double kPi{3.14};

	std::cout << "Enter the radius: ";
	std::cin >> radius;

	//Cacluate the area of the circle using pi*r^2
	double area{radius * radius * kPi};

	std::cout << "Area of the circle: " << area << "\n";

	return 0;
}