#include <cmath>
#include <iostream>
#include <print>

int main()
{
	int number = 0;	
	std::cin >> number;

	const double sqrt_5 = std::sqrt(5.0);
	const double  phi = (1 + sqrt_5) / 2;
	const double psi = (1 - sqrt_5) / 2;

	double numerator = std::pow(phi, number) - std::pow(psi, number);
	int answer = static_cast<int>(std::round(numerator / sqrt_5));
	std::print("{}\n", answer);
}	 
