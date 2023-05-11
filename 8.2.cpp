#include <iostream>
#include <vector>
#include <string>

void print(std::string labeling, std::vector<int> numbers) {
	std::cout << labeling << ": ";

	for (auto& number : numbers)
		std::cout << number << " ";
}
 

int main()
{
	std::string labeling, number;
	std::vector <int> numbers;
	std::cout << "Enter labeling and numbers, press 'q' when finished" << "\n";
	std::cin >> labeling;
	
	while (true) {
		std::cin >> number;
		
		if (number == "q") {
			
			break;
		}
		
		numbers.push_back(stoi(number));



	}
	print(labeling, numbers);
		


	

	return 0;

}


