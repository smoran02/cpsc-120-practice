/* 
 * 04_input_output_soln.cc
 */

#include <iostream>
#include <string>

int main() {

	std::string first_name{}, last_name{};

	std::cout << "Enter your first name: ";
	std::cin >> first_name;

	std::cout << "Enter your last name: ";
	std::cin >> last_name;

	std::cout << "Hello, " << first_name << " " << last_name << "!\n";

	return 0;
}