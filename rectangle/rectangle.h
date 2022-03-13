#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

/* 
 * Para suportar valores padrões. Crie 2 construtores, 1 sem parâmetros e outro
 * com parâmetros.
 */ 
 
class Rectangle {
     private:
        float _height, _width;
        
     public:
        Rectangle();
        
        Rectangle(float height, float width);
        
        bool set_height(float height);
        
        bool set_width(float width);
        
        float get_height();
        
        float get_width();
        
        float get_perimeter();
        
        float get_area();
};

#endif