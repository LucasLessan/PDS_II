#include <string>

#include "overnightpackage.h"

OverNightPackage::OverNightPackage(unsigned int peso, unsigned int custo_por_quilo, unsigned int taxa_adicional_por_quilo, std::string nome, std::string endereco) : Package(peso, custo_por_quilo, nome, endereco), _taxa_adicional_por_quilo(taxa_adicional_por_quilo) {}

double OverNightPackage::calculate_cost() {return (double)(this->_custo_por_quilo + this->_taxa_adicional_por_quilo) * this->_peso;}
