#include <iostream>
#include <vector>
#include <string>

std::vector<int> copy_vector(std::vector<int> vector1) {
	int size = vector1.size();
	std::vector<int> vector2;

	for (int i = size - 1; i >= 0; i--) {
		vector2.push_back(vector1[i]);
	}
	return vector2;
}
void reverse_vector(std::vector<int> &vector) {
	
	int last = vector.size();
	for (int i = 0; i <= last / 2; i++) {
		std::swap(vector[i], vector[last - 1 - i]);
	}
}
void show_vector(std::vector<int> vector) {
	for (auto& number : vector) {
		std::cout << number << " ";
	}

}

int main()
{
	std::string number;
	std::vector<int> vector1, vector2;
	
	std::cout << "Input numbers" << "\n";
	while (true) {
		std::cin >> number;
		if (number == "q") {
			break;
		}
		vector1.push_back(stoi(number));

	}
	vector2 = copy_vector(vector1);
	std::cout << "First reverse\n";

	std::cout << "Vector1: ";
	show_vector(vector1);

	std::cout << "\nVector2: ";
	show_vector(vector2);

	std::cout << "\nSecond reverse:\n";
	std::cout << "Vector1: ";
	show_vector(vector1);

	reverse_vector(vector1);

	std::cout << "\nVector1 reversed: ";
	show_vector(vector1);

	
	std::cout << "\n";
	return 0;

}
