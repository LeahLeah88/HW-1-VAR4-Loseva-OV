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
void task3()
{
	setlocale(LC_ALL, "Russian");

	int m;
	int n;
	std::cout << "m = ";
	std::cin >> m;
	std::cout << "n = ";
	std::cin >> n;

	if (m % n == 0)
		std::cout << m / n;
	else
		std::cout << "M на N нацело не делится";
}
int main()
{
	task1();
	task2();
	task3();
}