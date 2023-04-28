#include <iostream>
#include "Signal.h"
#include "ProcessedData.h"
#include "SignalProcessedData.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "---------- Сигнал ----------\n";
    std::cout << "Введіть амплітуду та частоту сигналу: ";
    Signal x;
    std::cin >> x;
    std::cout << x<< '\n';
    
    std::cin.ignore(LONG_MAX, '\n');

    std::cout << "---------- Результат обробки  ----------\n";
    std::cout << "Введіть результат сигналу: ";
    ProcessedData y;
    std::cin >> y;
    std::cout << y;
    std::cout << std::endl;

    std::cout << "---------- Результат обробки сигналу ----------\n";
    std::cout << "Введіть амплітуду та частоту сигналу та результат сигналу: ";
    SignalProcessedData c;
    std::cin >> c;
    std::cout << c;
    std::cout << std::endl;
 
}
