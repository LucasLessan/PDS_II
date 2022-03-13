#include <string>

#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage(unsigned int peso, unsigned int custo_por_quilo, unsigned int taxa_de_envio, std::string nome, std::string endereco) : Package(peso, custo_por_quilo, nome, endereco), _taxa_de_envio(taxa_de_envio) {}

double TwoDayPackage::calculate_cost() {return (double) _peso * _custo_por_quilo + _taxa_de_envio;}
