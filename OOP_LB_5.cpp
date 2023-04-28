#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapeze.h"

int main()
{
    Triangle tr1(4, 4, 6);
    tr1.Show();
    int Perumetrs = tr1.Perumetr();
    std::cout << "Triangle perumetr = " << Perumetrs << "\n";
    int Areas = tr1.Area();
    std::cout << "Triangle Area = " << Areas << "\n" << std::endl;

    Circle ci1(15);
    ci1.Show();
    int CPerumetrs = ci1.Perumetr();
    std::cout << "Circle perumetr = " << CPerumetrs << "\n";
    int CAreas = ci1.Area();
    std::cout << "Circle Area = " << CAreas << "\n" << std::endl;

    Trapeze tra1(8, 8, 5, 4);
    tra1.Show();
    int TraPerumetrs = tra1.Perumetr();
    std::cout << "Trapeze perumetr = " << TraPerumetrs << "\n";
    int TraAreas = tra1.Area();
    std::cout << "Trapeze Area = " << TraAreas << "\n" << std::endl;
}

