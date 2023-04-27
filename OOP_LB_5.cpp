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
    std::cout << Perumetrs << "\n";
    int Areas = tr1.Area();
    std::cout << Areas << "\n";
}

