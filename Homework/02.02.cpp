#include <iostream>
#include <print>
#include <cmath>

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	std::cin >> a >> b >> c;
	
	const double epsilon = 1e-6;
	if (std::abs(a) < epsilon)
	{
		if (std::abs(b) < epsilon)
		{
			if (std::abs(c) < epsilon)
			{
				std::print("R");
			}
			else
			{
				std::print("No roots");
			}
		}
		else
		{
			std::print("{}\n", -c / b);
		}
	}
	else
	{
		double discriminant = std::pow(b, 2) - 4 * a * c;
		double sqrt_discriminant = std::sqrt(discriminant);
		if (std::abs(discriminant) < epsilon)
		{
			std::print("{}\n", -b / 2 / a);
		}
		else if (discriminant < 0.0)
		{
			std::print("No roots");
		}
		else
		{
			std::print("x1 = {}\n", (-b + sqrt_discriminant) / 2 / a);
			std::print("x2 = {}\n", (-b - sqrt_discriminant) / 2 / a);
		}
	}
}