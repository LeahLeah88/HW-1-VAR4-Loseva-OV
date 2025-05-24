#include <iostream>
#include <cmath>
#include <iomanip>

void task1()
{
	double x;
	std::cout << "x = ";
	std::cin >> x;
	double y;
	std::cout << "y = ";
	std::cin >> y;
	double result;
	result = ((sin(x) + cos(y)) / tan(x)) + 0, 43;
	std::cout << std::setprecision(5) << std::fixed;
	std::cout << "Result = " << result;
}
void task2()
	{
		double x;
	std::cout << std::setw(20) << "x = ";
	std::cin >> x;
	double y;
	std::cout << std::setw(20) << "y = ";
	std::cin >> y;
	double result;
	result = (pow(x, 3) + pow(y, 3)) / 2;
	std::cout << std::setprecision(5) << std::fixed;
	std::cout << std::setw(25) << "Result = " << result;
	}

int main()
{
	task1();
	task2();
}