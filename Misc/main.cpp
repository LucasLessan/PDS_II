#include <iostream>

#include "data.h"

int main() {
    Data data = Data(12, 1, 2014);

    std::cout << data.get_dia() << "_" << data.get_mes() << "_" << data.get_ano() << std::endl;

    std::cout << data.get_data_curto() << std::endl;

    std::cout << data.get_data_longo() << std::endl << std::endl;

    return 0;
}
