#include <sstream>

#include "data.h"

/*
 * Sua classe deve conter:
 * - atributos: dia, mes e ano
 * - metodos: get_dia(), get_mes(), get_ano(), get_data_curto(),
 *            get_data_longo();
 * - get_data_curto() -> 22/08/2018
 * - get_data_longo() -> 22 de agosto de 2018
 *                       para este, c++ suporta array de strings
 *                       std::string cor[3] = {"Blue", "Red", "Orange"};
 *
 * C++ também suporta o operador + em strings:
 * std::string s = "Hello";
 * std::string greet = s + " World";
 * greet == "Hello World"
 */
Data::Data(int dia, int mes, int ano) {
	_dia = dia;
	_mes = mes;
	_ano = ano;
}

int Data::get_dia() {
	return _dia;
}

int Data::get_mes() {
	return _mes;
}

int Data::get_ano() {
	return _ano;
}

std::string Data::get_data_curto() {
    std::stringstream d, m, a;
    d << _dia;
    m << _mes;
    a << _ano;
	return d.str() + '/' + m.str() + '/' + a.str();
}

std::string Data::get_data_longo() {
    std::stringstream d, a;
    d << _dia;
    a << _ano;
	switch (_mes) {
		case 1:
			return d.str() + " de Janeiro de " + a.str();
		case 2:
			return d.str() + " de Fevereiro de " + a.str();
		case 3:
			return d.str() + " de Marco de " + a.str();
		case 4:
			return d.str() + " de Abril de " + a.str();
		case 5:
			return d.str() + " de Maio de " + a.str();
		case 6:
			return d.str() + " de Junho de " + a.str();
		case 7:
			return d.str() + " de Julho de " + a.str();
		case 8:
			return d.str() + " de Agosto de " + a.str();
		case 9:
			return d.str() + " de Setembro de " + a.str();
		case 10:
			return d.str() + " de Outubro de " + a.str();
		case 11:
			return d.str() + " de Novembro de " + a.str();
		case 12:
			return d.str() + " de Dezembro de " + a.str();
	}
}
