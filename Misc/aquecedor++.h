#ifndef PDS2_AQUECEDOR++_H
#define PDS2_AQUECEDOR++_H

// Nome dos metodos:
// aquecer()
// resfriar()
// get_temperatura()

class Aquecedor {
    private:
        double _temperatura, _temperatura_minima, _temperatura_maxima, _fator;
        
    public:
        Aquecedor();
        
        Aquecedor(double temperatura);
        
        Aquecedor(double temperatura, double fator);
        
        void aquecer();
        
        void resfriar();
        
        double get_temperatura();
        
        void set_fator(double fator);
};

#endif
