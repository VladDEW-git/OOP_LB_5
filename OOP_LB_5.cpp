#include <iostream>
#include <Windows.h>
#include "Quadrangle.h"
#include "Square.h"
#include "Rectangle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d;
	bool inputIsValid = false;

	do
	{
		try
		{
			std::cout << "Введіть довжини сторін чотирикутника: ";
			std::cin >> a >> b >> c >> d;

			if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
			{
				throw std::invalid_argument("Довжина сторони не може бути від'ємною або рівною нулю, або бути символом!");
			}
			if (a + b <= d || a + c <= d || a + d <= b || b + c <= d || b + d <= c || c + d <= a)
			{
				throw std::invalid_argument("Чотирикутник з такими довжинами сторін не існує!");
			}

			inputIsValid = true;
		}
		catch (std::invalid_argument& a)
		{
			std::cout << "Помилка: " << a.what() << std::endl;

			if (!std::cin.good() && std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(LONG_MAX, '\n');
			}
		}
	} while (!inputIsValid);

	Quadrangle bob(a, b, c, d);
	bob.print();
	bob.AreaAndPerimeter();


	int x1;
	bool inputIsValid1 = false;
	do
	{
		try
		{
			std::cout << "\nВведіть довжину сторони квадрата ";
			std::cin >> x1;

			if (x1 <= 0)
			{
				throw std::invalid_argument("Довжина сторони не може бути від'ємною або рівною нулю, або бути символом!");
			}

			inputIsValid1 = true;
		}
		catch (std::invalid_argument& a)
		{
			std::cout << "Помилка: " << a.what() << std::endl;

			if (!std::cin.good() && std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(LONG_MAX, '\n');
			}
		}
	} while (!inputIsValid1);

	Square bo(x1);
	bo.print();
	bo.AreaAndPerimeter();


	int y1,y2;
	bool inputIsValid2 = false;
	do
	{
		try
		{
			std::cout << "\nВведіть довжини сторін прямокутника ";
			std::cin >> y1 >> y2;

			if (y1 <= 0 || y2<=0)
			{
				throw std::invalid_argument("Довжина сторони не може бути від'ємною або рівною нулю, або бути символом!");
			}

			inputIsValid2 = true;
		}
		catch (std::invalid_argument& a)
		{
			std::cout << "Помилка: " << a.what() << std::endl;

			if (!std::cin.good() && std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(LONG_MAX, '\n');
			}
		}
	} while (!inputIsValid2);

	


	std::cout << "ZIGA" << "\n";
}

