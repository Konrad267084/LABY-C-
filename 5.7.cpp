#include <iostream>
#include <cmath>


double delta(double a, double b, double c) {

	return (b * b - 4 * a * c);
}

double result1(double a, double b, double c) {

	return (-b - sqrt(delta(a, b, c))) / (2 * a);
}

double result2(double a, double b, double c) {

	return (-b + sqrt(delta(a, b, c))) / (2 * a);
}

double delta_equals_zero(double a, double b, double c) {

	return -b / (2 * a);
}

int main()
{
	double a, b, c;

	std::cout << "Enter coefficients (a, b, c) for square equition: ax^2 + bx + c = 0\n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (delta(a,b,c) > 0) {
		
		std::cout << "x1= " << result1(a, b, c) << " x2= " << result2(a, b, c) << "\n";

	}
	else if (delta(a,b,c) == 0) {
		std::cout << "x= " << delta_equals_zero(a,b,c) <<"\n";
	}
	else {
		std::cout << "Fail" << "\n";
	}





	return 0;

}

