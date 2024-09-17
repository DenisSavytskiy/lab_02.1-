// Lab_2.1.cpp
// < Савицький Денис >
// Лабораторна робота №2.1.
// Лінійні програми.
// Варіант 27
#include <iostream>
#include <math.h>
int main()
{
	double x, z1, z2;
	std::cout << "x = ";
	std::cin >> x;
	double p = 4 * atan(1.0);
	z1 = pow(cos(((3 * p / 8) - (x / 4))), 2) - pow(cos((11 * p / 8) + (x / 4)), 2);
	z2 = (sqrt(2) / 2) * sin(x / 2);
	std::cout << '\n' << "z1 = " << z1 << '\n' << "z2 = " << z2;

}
