#include <iostream>
int main() {
	std::cout << "Enter the number" << "\n";
	int number;
	std::cin >> number;
	if (number % 2 == 0) {
		std::cout << "The value " << number << " is an even number";
	} else
		std::cout << "The value " << number << " is an odd number";




}
