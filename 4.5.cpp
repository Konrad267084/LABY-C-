#include <iostream>

float add(float first_number, float second_number)
{
	return first_number + second_number;
}
float subtract(float first_number, float second_number)
{
	return first_number - second_number;
}
float divide(float first_number, float second_number)
{
	return first_number / second_number;
}
float multiply(float first_number, float second_number)
{
	return first_number * second_number;
}

int main()
{
	std::cout << "Enter data: ";
	float first_number, second_number;
	char sign;
	std::cin >> first_number>> second_number >> sign;
	
	if (sign == '+')
	{
		std::cout << "Result is " << add(first_number, second_number);

	} else if (sign == '-')
	{
		std::cout << "Result is " << subtract(first_number, second_number);
	} else if (sign == '/')
	{
		std::cout << "Result is " << divide(first_number, second_number);
	} else if (sign == '*') {
		std::cout << "Result is " << multiply(first_number, second_number);
	}
	else {
		std::cout << "Wrong sign! ";
	}

	std::cout << "\n";
	
	return 0;
}