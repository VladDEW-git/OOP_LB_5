#include <iostream>
#include "NATO.h"
#include "USA.h"
#include "Deutsh.h"
#include "UK.h"
#include "Ukraine.h"

int main()
{
    USA usa("01.05.2023", "Kharkiv", 10, 25, 5, 50000);
    Deutsh deu("01.05.2025", "Kiyv", 10, 5, 70000);
    UK uk("01.05.2023", "Ternopil", 18, 223, 55, 40000);

    Ukraine ukr(usa, deu, uk);
    //ukr.Show(usa, deu, uk);
    //ukr.USA::Logistics();
    ukr.ShowNormalna();
}

