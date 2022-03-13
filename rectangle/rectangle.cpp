#include "rectangle.h"

Rectangle::Rectangle() {
    _height = 1.0;
    _width = 1.0;
}

Rectangle::Rectangle(float width, float height) {
    _height = height;
    _width = width;
}

bool Rectangle::set_height(float height) {
    if(height > 0.0 && height < 20.0) {
        _height = height;
        return true;
    }
    return false;
}
    
bool Rectangle::set_width(float width) {
    if(width > 0.0 && width < 20.0) {
        _width = width;
        return true;
    }
    return false;
}

float Rectangle::get_height() {
    return _height;
}

float Rectangle::get_width() {
    return _width;
}

float Rectangle::get_perimeter() {
    return 2 * _height + 2 * _width;
}

float Rectangle::get_area() {
    return _height * _width;
}