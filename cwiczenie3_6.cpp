#include <iostream>

int main() {
	std::cout << "Enter three numbers" << "\n";
	int first_number, second_number, third_number;
	std::cin >> first_number >> second_number >> third_number;
	if (first_number > second_number) {
		std::swap(first_number, second_number);
	} 
	if (second_number > third_number) {
		std::swap(second_number, third_number);
	}
	if (first_number > second_number) {
		std::swap(first_number, second_number);
	}
	std::cout << "Sequence is " << first_number << " " << second_number << " " << third_number;







}