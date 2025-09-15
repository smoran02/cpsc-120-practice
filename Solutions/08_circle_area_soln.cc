/*
 * 08_circle_area_soln.cc
 */

#include <iostream>

int main() {

	int radius{};
	// Use a constant variable prefixed with k to store PI
	const double k_pi{3.14};

	std::cout << "Enter the radius: ";
	std::cin >> radius;

	//Cacluate the area of the circle using pi*r^2
	double area{radius * radius * k_pi};

	std::cout << "Area of the circle: " << area << "\n";

	return 0;
}