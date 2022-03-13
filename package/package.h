#ifndef PDS2_PACKAGE_H
#define PDS2_PACKAGE_H

#include <string>

class Package {
    protected:
        unsigned int _peso, _custo_por_quilo;
        std::string _nome, _endereco;
    public:
        Package(unsigned int peso, unsigned int custo_por_quilo, std::string nome, std::string endereco);
        virtual ~Package();
        virtual double calculate_cost();
        unsigned int get_peso();
        unsigned int get_custo_por_quilo();
        std::string get_nome();
};

#endif
