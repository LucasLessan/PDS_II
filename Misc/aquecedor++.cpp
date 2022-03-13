#include <iostream>

#include "aquecedor++.h"

Aquecedor::Aquecedor() {
    _temperatura = 20.0;
    _temperatura_minima = 10.0;
    _temperatura_maxima = 40.0;
    _fator = 5.0;
}

Aquecedor::Aquecedor(double temperatura) {
    _temperatura = temperatura;
    _temperatura_minima = 10.0;
    _temperatura_maxima = 40.0;
    _fator = 5.0;
}

Aquecedor::Aquecedor(double temperatura, double fator) {
    _temperatura = temperatura;
    _temperatura_minima = 10.0;
    _temperatura_maxima = 40.0;
    _fator = fator;
}

void Aquecedor::aquecer() {
    if(_temperatura + _fator <= _temperatura_maxima)
        _temperatura += _fator;
    else
        std::cout << "A temperatura nao pode ser aumentada!";
}

void Aquecedor::resfriar() {
    if(_temperatura - _fator >= _temperatura_minima)
        _temperatura -= _fator;
    else
        std::cout << "A temperatura nao pode ser reduzida!";
}

double Aquecedor::get_temperatura() {
    return _temperatura;
}

void Aquecedor::set_fator(double fator) {
    _fator = fator;
}