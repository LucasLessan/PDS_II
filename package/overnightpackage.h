#ifndef PDS2_OVERNIGHTPACKAGE_H
#define PDS2_OVERNIGHTPACKAGE_H

#include <string>

#include "package.h"

class OverNightPackage : public Package {
    private:
        unsigned int _taxa_adicional_por_quilo;
    public:
        OverNightPackage(unsigned int peso, unsigned int custo_por_quilo, unsigned int taxa_adicional_por_quilo, std::string nome, std::string endereco);
        double calculate_cost();
};

#endif
