#include "Ukraine.h"

Ukraine::Ukraine()
	: USA(), Deutsh(), UK()
{

}

Ukraine::Ukraine(USA usa, Deutsh deu, UK uk)
	: USA(usa), Deutsh(deu), UK(uk)
{

}

void Ukraine::Show(USA usa, Deutsh deu, UK uk)
{
	std::cout << "Delivery from USA: " << "\n";
	std::cout << usa << "\n\n";

	std::cout << "Delivery from Deutch: " << "\n";
	std::cout << deu << "\n\n";

	std::cout << "Delivery from UK: " << "\n";
	std::cout << uk << "\n\n";
}

void Ukraine::ShowNormalna()
{
	std::cout << "Delivery from USA: " << "\n";
	USA::Logistics();
	USA::Price();

	std::cout << "Delivery from Deutch: " << "\n";
	Deutsh::Logistics();
	Deutsh::Price();

	std::cout << "Delivery from UK: " << "\n";
	UK::Logistics();
	UK::Price();
}
