#include <iostream>
#include <cmath>



int main() {

	int found = 0;
	
	for (int i = 0; i < 64; i++) 
	{
		if (pow(2, i) >= 1e3 && found < 1) 
		{
			++found;
			std::cout << "First number greater than 1000 is on square number " << i + 1 << "\n";
		}
		if (pow(2, i) >= 1e6 && found < 2)
		{
			++found;
			std::cout << "First number greater than 1000000 in on square number " << i + 1 << "\n";
		}
		if (pow(2, i) >= 1e9 && found < 3)
		{
			++found;
			std::cout << "First number greater than 1000000000 is on square number " << i + 1 << "\n";
		}
	
	}
	std::cout << "\n";

	return 0;
}
