#include "aeroplane.h"
#include <string>

Aeroplane::Aeroplane(int number_of_turbines, int size_in_meters, int number_of_passengers, float autonomy_in_kilometers, float top_speed, std::string name)
    : _number_of_turbines(number_of_turbines), _size_in_meters(size_in_meters), _number_of_passengers(number_of_passengers), _autonomy_in_kilometers(autonomy_in_kilometers),
      _top_speed(top_speed), _name(name) {}

Aeroplane::~Aeroplane() {}

int Aeroplane::fly() {
    return _current_speed = 300;
}

int Aeroplane::get_number_of_turbines() {
	return _number_of_turbines;
}

int Aeroplane::get_size() {
	return _size_in_meters;
}

int Aeroplane::get_number_of_passengers() {
	return _number_of_passengers;
}

float Aeroplane::get_autonomy() {
	return _autonomy_in_kilometers;
}

float Aeroplane::get_top_speed() {
	return _top_speed;
}

std::string Aeroplane::get_name() {
	return _name;
}
