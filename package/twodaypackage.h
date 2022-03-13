#ifndef PDS2_TWODAYPACKAGE_H
#define PDS2_TWODAYPACKAGE_H

#include <string>

#include "package.h"

class TwoDayPackage : public Package {
    private:
        unsigned int _taxa_de_envio;
    public:
        TwoDayPackage(unsigned int peso, unsigned int custo_por_quilo, unsigned int taxa_de_envio, std::string nome, std::string endereco);
        double calculate_cost();
};

#endif
